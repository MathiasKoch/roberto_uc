/*
    ChibiOS - Copyright (C) 2006..2016 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#include <stdio.h>
#include <string.h>

#include "ch.h"
#include "hal.h"

#include "shell.h"
#include "chprintf.h"

#include "usbcfg.h"

#include "gfx.h"

#include "mpu9250.h"

#include <ros.h>
#include <std_msgs/String.h>

/*
 * DP resistor control is not possible on the STM32F3-Discovery, using stubs
 * for the connection macros.
 */
#define usb_lld_connect_bus(usbp)
#define usb_lld_disconnect_bus(usbp)

#define OLED_LEFT 0
#define OLED_RIGHT 1

ros::NodeHandle nh;

std_msgs::String str_msg;
ros::Publisher chatter("chatter", &str_msg);

char hello[13] = "hello world!";


/*===========================================================================*/
/* Command line related.                                                     */
/*===========================================================================*/

/*#define SHELL_WA_SIZE   THD_WORKING_AREA_SIZE(2048)

// Can be measured using dd if=/dev/xxxx of=/dev/null bs=512 count=10000.
static void cmd_write(BaseSequentialStream *chp, int argc, char *argv[]) {
  static uint8_t buf[] =
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef";

  (void)argv;
  if (argc > 0) {
    chprintf(chp, "Usage: write\r\n");
    return;
  }

  while (chnGetTimeout((BaseChannel *)chp, TIME_IMMEDIATE) == Q_TIMEOUT) {
#if 1
    // Writing in channel mode.
    chnWrite(&SDU1, buf, sizeof buf - 1);
#else
    // Writing in buffer mode.
    (void) obqGetEmptyBufferTimeout(&SDU1.obqueue, TIME_INFINITE);
    memcpy(SDU1.obqueue.ptr, buf, SERIAL_USB_BUFFERS_SIZE);
    obqPostFullBuffer(&SDU1.obqueue, SERIAL_USB_BUFFERS_SIZE);
#endif
  }
  chprintf(chp, "\r\n\nstopped\r\n");
}

static const ShellCommand commands[] = {
  {"write", cmd_write},
  {NULL, NULL}
};

static const ShellConfig shell_cfg1 = {
  (BaseSequentialStream *)&SDU1,
  commands
};*/

/*===========================================================================*/
/* Generic code.                                                             */
/*===========================================================================*/


/*
 * Application entry point.
 */
int main(void) {
  //thread_t *shelltp1 = NULL;
  //event_listener_t shell_el;

  /*
   * System initializations.
   * - HAL initialization, this also initializes the configured device drivers
   *   and performs the board-specific initializations.
   * - Kernel initialization, the main() function becomes a thread and the
   *   RTOS is active.
   */
  halInit();
  chSysInit();

  rccEnableTIM1(0);
  rccEnableUSB(0);

  /*
   * Initializes a serial-over-USB CDC driver.
   */
  sduObjectInit(&SDU1);
  sduStart(&SDU1, &serusbcfg1);
  //sduObjectInit(&SDU2);
  //sduStart(&SDU2, &serusbcfg2);

  /*
   * Activates the USB driver and then the USB bus pull-up on D+.
   * Note, a delay is inserted in order to not have to disconnect the cable
   * after a reset.
   */
  usbDisconnectBus(serusbcfg1.usbp);
  chThdSleepMilliseconds(1500);
  usbStart(serusbcfg1.usbp, &usbcfg);
  usbConnectBus(serusbcfg1.usbp);

  /*
   * Shell manager initialization.
   */
  //shellInit();
  //chEvtRegister(&shell_terminated, &shell_el, 0);

  // Initalize ROS handles
  nh.initNode();
  nh.advertise(chatter);

  // Initialize OLED Displays
  font_t font1;
  font_t font2;

  gfxInit();

  // Open the first font that we find
  font1 = gdispOpenFont("DejaVu Sans Book 12");
  font2 = gdispOpenFont("DejaVu Sans Book 20");

  GDisplay *gLEFT = gdispGetDisplay(OLED_LEFT);
  //GDisplay *gRIGHT = gdispGetDisplay(OLED_RIGHT);

  // Show some stuff on the display
  gdispGDrawString(gLEFT, 5, 5, "Hello uGFX!", font2, White);
  gdispGDrawString(gLEFT, 5, 35, "Temp. 1: 24.1", font1, White);
  gdispGDrawString(gLEFT, 5, 50, "Temp. 2: 28.3", font1, White);


  // Initialize MPU9250
  initialize_mpu();

  /*
   * Normal main() thread activity, spawning shells.
   */
  while (true) {
    if (SDU1.config->usbp->state == USB_ACTIVE) {
      // Setup shell on USB endpoint 1
      /*if (shelltp1 == NULL) {
        shelltp1 = chThdCreateFromHeap(NULL, SHELL_WA_SIZE,
                                       "shell1", NORMALPRIO + 1,
                                       shellThread, (void *)&shell_cfg1);
      }
      chEvtWaitAny(EVENT_MASK(0));
      if (chThdTerminatedX(shelltp1)) {
        chThdRelease(shelltp1);
        shelltp1 = NULL;
      }*/


      update_mpu();

      str_msg.data = hello;
      chatter.publish( &str_msg );
      nh.spinOnce();
    }
    chThdSleepMilliseconds(1000);
  }
}
