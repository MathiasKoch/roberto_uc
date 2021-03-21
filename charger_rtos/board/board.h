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

/*
 * This file has been automatically generated using ChibiStudio board
 * generator plugin. Do not edit manually.
 */

#ifndef BOARD_H
#define BOARD_H

/*
 * Setup for STMicroelectronics STM32 Nucleo64-F302R8 board.
 */

/*
 * Board identifier.
 */
#define BOARD_NAME                  "STMicroelectronics STM32 F302xC"

/*
 * Board oscillators-related settings.
 * NOTE: LSE not fitted.
 */
#if !defined(STM32_LSECLK)
#define STM32_LSECLK                0U
#endif

#define STM32_LSEDRV                (3U << 3U)

#if !defined(STM32_HSECLK)
#define STM32_HSECLK                16000000U
#endif

//#define STM32_HSE_BYPASS

/*
 * MCU type as defined in the ST header.
 */
#define STM32F302xC

/*
 * IO pins assignments.
 */
#define GPIOA_ARD_A0                0U
#define GPIOA_ARD_A1                1U
#define GPIOA_USART2_TX             2U
#define GPIOA_USART2_RX             3U
#define GPIOA_SPI1_CS               4U
#define GPIOA_SPI1_CLK              5U
#define GPIOA_SPI1_MISO             6U
#define GPIOA_SPI1_MOSI             7U
#define GPIOA_BTN_P0                8U
#define GPIOA_I2C2_SCL              9U
#define GPIOA_I2C2_SDA              10U
#define GPIOA_USB_DM                11U
#define GPIOA_USB_DP                12U
#define GPIOA_SWITCH_LED            13U
#define GPIOA_KILL                  14U
#define GPIOA_INT_SHUTDOWN          15U

#define GPIOB_SPI1_IRQ              0U
#define GPIOB_ARD_D1                1U
#define GPIOB_ARD_D2                2U
#define GPIOB_INT1                  3U
#define GPIOB_INT2                  4U
#define GPIOB_ARD_D5                5U
#define GPIOB_I2C_SCL               6U
#define GPIOB_PIN7                  7U
#define GPIOB_ARD_D15               8U
#define GPIOB_ARD_D14               9U
#define GPIOB_ARD_D6                10U
#define GPIOB_PIN11                 11U
#define GPIOB_PIN12                 12U
#define GPIOB_LED_GREEN             13U
#define GPIOB_PIN14                 14U
#define GPIOB_PIN15                 15U

#define GPIOC_ARD_A5                0U
#define GPIOC_ADC1_IN6              0U
#define GPIOC_ARD_A4                1U
#define GPIOC_ADC1_IN7              1U
#define GPIOC_PIN2                  2U
#define GPIOC_PIN3                  3U
#define GPIOC_PIN4                  4U
#define GPIOC_PIN5                  5U
#define GPIOC_PIN6                  6U
#define GPIOC_ARD_D9                7U
#define GPIOC_PIN8                  8U
#define GPIOC_PIN9                  9U
#define GPIOC_PIN10                 10U
#define GPIOC_PIN11                 11U
#define GPIOC_PIN12                 12U
#define GPIOC_BUTTON                13U
#define GPIOC_OSC32_IN              14U
#define GPIOC_OSC32_OUT             15U

#define GPIOD_PIN0                  0U
#define GPIOD_PIN1                  1U
#define GPIOD_PIN2                  2U
#define GPIOD_PIN3                  3U
#define GPIOD_PIN4                  4U
#define GPIOD_PIN5                  5U
#define GPIOD_PIN6                  6U
#define GPIOD_PIN7                  7U
#define GPIOD_PIN8                  8U
#define GPIOD_PIN9                  9U
#define GPIOD_PIN10                 10U
#define GPIOD_PIN11                 11U
#define GPIOD_PIN12                 12U
#define GPIOD_PIN13                 13U
#define GPIOD_PIN14                 14U
#define GPIOD_PIN15                 15U

#define GPIOE_PIN0                  0U
#define GPIOE_PIN1                  1U
#define GPIOE_PIN2                  2U
#define GPIOE_PIN3                  3U
#define GPIOE_PIN4                  4U
#define GPIOE_PIN5                  5U
#define GPIOE_PIN6                  6U
#define GPIOE_PIN7                  7U
#define GPIOE_PIN8                  8U
#define GPIOE_PIN9                  9U
#define GPIOE_PIN10                 10U
#define GPIOE_PIN11                 11U
#define GPIOE_PIN12                 12U
#define GPIOE_PIN13                 13U
#define GPIOE_PIN14                 14U
#define GPIOE_PIN15                 15U

#define GPIOF_OSC_IN                0U
#define GPIOF_OSC_OUT               1U
#define GPIOF_PIN2                  2U
#define GPIOF_PIN3                  3U
#define GPIOF_PIN4                  4U
#define GPIOF_PIN5                  5U
#define GPIOF_PIN6                  6U
#define GPIOF_PIN7                  7U
#define GPIOF_PIN8                  8U
#define GPIOF_PIN9                  9U
#define GPIOF_PIN10                 10U
#define GPIOF_PIN11                 11U
#define GPIOF_PIN12                 12U
#define GPIOF_PIN13                 13U
#define GPIOF_PIN14                 14U
#define GPIOF_PIN15                 15U

#define GPIOG_PIN0                  0U
#define GPIOG_PIN1                  1U
#define GPIOG_PIN2                  2U
#define GPIOG_PIN3                  3U
#define GPIOG_PIN4                  4U
#define GPIOG_PIN5                  5U
#define GPIOG_PIN6                  6U
#define GPIOG_PIN7                  7U
#define GPIOG_PIN8                  8U
#define GPIOG_PIN9                  9U
#define GPIOG_PIN10                 10U
#define GPIOG_PIN11                 11U
#define GPIOG_PIN12                 12U
#define GPIOG_PIN13                 13U
#define GPIOG_PIN14                 14U
#define GPIOG_PIN15                 15U

#define GPIOH_PIN0                  0U
#define GPIOH_PIN1                  1U
#define GPIOH_PIN2                  2U
#define GPIOH_PIN3                  3U
#define GPIOH_PIN4                  4U
#define GPIOH_PIN5                  5U
#define GPIOH_PIN6                  6U
#define GPIOH_PIN7                  7U
#define GPIOH_PIN8                  8U
#define GPIOH_PIN9                  9U
#define GPIOH_PIN10                 10U
#define GPIOH_PIN11                 11U
#define GPIOH_PIN12                 12U
#define GPIOH_PIN13                 13U
#define GPIOH_PIN14                 14U
#define GPIOH_PIN15                 15U

/*
 * IO lines assignments.
 */
#define LINE_ARD_A0                 PAL_LINE(GPIOA, 0U)
#define LINE_ADC1_IN1               PAL_LINE(GPIOA, 0U)
#define LINE_ARD_A1                 PAL_LINE(GPIOA, 1U)
#define LINE_ADC1_IN2               PAL_LINE(GPIOA, 1U)
#define LINE_ARD_D1                 PAL_LINE(GPIOA, 2U)
#define LINE_USART2_TX              PAL_LINE(GPIOA, 2U)
#define LINE_ARD_D0                 PAL_LINE(GPIOA, 3U)
#define LINE_USART2_RX              PAL_LINE(GPIOA, 3U)
#define LINE_ARD_A2                 PAL_LINE(GPIOA, 4U)
#define LINE_ADC1_IN5               PAL_LINE(GPIOA, 4U)
#define LINE_ARD_D13                PAL_LINE(GPIOA, 5U)
#define LINE_ARD_D12                PAL_LINE(GPIOA, 6U)
#define LINE_ARD_D11                PAL_LINE(GPIOA, 7U)
#define LINE_ARD_D7                 PAL_LINE(GPIOA, 8U)
#define LINE_ARD_D8                 PAL_LINE(GPIOA, 9U)
#define LINE_ARD_D2                 PAL_LINE(GPIOA, 10U)
#define LINE_SWDIO                  PAL_LINE(GPIOA, 13U)
#define LINE_SWCLK                  PAL_LINE(GPIOA, 14U)

#define LINE_ARD_A3                 PAL_LINE(GPIOB, 0U)
#define LINE_ADC1_IN11              PAL_LINE(GPIOB, 0U)
#define LINE_SWO                    PAL_LINE(GPIOB, 3U)
#define LINE_ARD_D3                 PAL_LINE(GPIOB, 3U)
#define LINE_ARD_D5                 PAL_LINE(GPIOB, 4U)
#define LINE_ARD_D4                 PAL_LINE(GPIOB, 5U)
#define LINE_ARD_D10                PAL_LINE(GPIOB, 6U)
#define LINE_ARD_D15                PAL_LINE(GPIOB, 8U)
#define LINE_ARD_D14                PAL_LINE(GPIOB, 9U)
#define LINE_ARD_D6                 PAL_LINE(GPIOB, 10U)
#define LINE_LED_GREEN              PAL_LINE(GPIOB, 13U)

#define LINE_ARD_A5                 PAL_LINE(GPIOC, 0U)
#define LINE_ADC1_IN6               PAL_LINE(GPIOC, 0U)
#define LINE_ARD_A4                 PAL_LINE(GPIOC, 1U)
#define LINE_ADC1_IN7               PAL_LINE(GPIOC, 1U)
#define LINE_ARD_D9                 PAL_LINE(GPIOC, 7U)
#define LINE_BUTTON                 PAL_LINE(GPIOC, 13U)
#define LINE_OSC32_IN               PAL_LINE(GPIOC, 14U)
#define LINE_OSC32_OUT              PAL_LINE(GPIOC, 15U)



#define LINE_OSC_IN                 PAL_LINE(GPIOF, 0U)
#define LINE_OSC_OUT                PAL_LINE(GPIOF, 1U)



/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2U))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2U))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2U))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2U))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_VERYLOW(n)       (0U << ((n) * 2U))
#define PIN_OSPEED_LOW(n)           (1U << ((n) * 2U))
#define PIN_OSPEED_MEDIUM(n)        (2U << ((n) * 2U))
#define PIN_OSPEED_HIGH(n)          (3U << ((n) * 2U))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2U))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2U))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2U))
#define PIN_AFIO_AF(n, v)           ((v) << (((n) % 8U) * 4U))

/* PORT A */
#define VAL_GPIOA_MODER ( \
    PIN_MODE_ANALOG(0) | \
    PIN_MODE_INPUT(1) | \
    PIN_MODE_ANALOG(2) | \
    PIN_MODE_ALTERNATE(3) | \
    PIN_MODE_OUTPUT(4) | \
    PIN_MODE_ALTERNATE(5) | \
    PIN_MODE_ALTERNATE(6) | \
    PIN_MODE_ALTERNATE(7) | \
    PIN_MODE_INPUT(8) | \
    PIN_MODE_ALTERNATE(9) | \
    PIN_MODE_ANALOG(10) | \
    PIN_MODE_ALTERNATE(11) | \
    PIN_MODE_ALTERNATE(12) | \
    PIN_MODE_ALTERNATE(13) | \
    PIN_MODE_ALTERNATE(14) | \
    PIN_MODE_ANALOG(15) | \
    0)

#define VAL_GPIOA_OTYPER ( \
    PIN_OTYPE_PUSHPULL(0) | \
    PIN_OTYPE_PUSHPULL(1) | \
    PIN_OTYPE_PUSHPULL(2) | \
    PIN_OTYPE_PUSHPULL(3) | \
    PIN_OTYPE_PUSHPULL(4) | \
    PIN_OTYPE_PUSHPULL(5) | \
    PIN_OTYPE_PUSHPULL(6) | \
    PIN_OTYPE_PUSHPULL(7) | \
    PIN_OTYPE_PUSHPULL(8) | \
    PIN_OTYPE_PUSHPULL(9) | \
    PIN_OTYPE_PUSHPULL(10) | \
    PIN_OTYPE_PUSHPULL(11) | \
    PIN_OTYPE_PUSHPULL(12) | \
    PIN_OTYPE_PUSHPULL(13) | \
    PIN_OTYPE_PUSHPULL(14) | \
    PIN_OTYPE_PUSHPULL(15) | \
    0)

#define VAL_GPIOA_OSPEEDR ( \
    PIN_OSPEED_VERYLOW(0) | \
    PIN_OSPEED_VERYLOW(1) | \
    PIN_OSPEED_VERYLOW(2) | \
    PIN_OSPEED_MEDIUM(3) | \
    PIN_OSPEED_VERYLOW(4) | \
    PIN_OSPEED_MEDIUM(5) | \
    PIN_OSPEED_MEDIUM(6) | \
    PIN_OSPEED_MEDIUM(7) | \
    PIN_OSPEED_VERYLOW(8) | \
    PIN_OSPEED_MEDIUM(9) | \
    PIN_OSPEED_VERYLOW(10) | \
    PIN_OSPEED_MEDIUM(11) | \
    PIN_OSPEED_MEDIUM(12) | \
    PIN_OSPEED_MEDIUM(13) | \
    PIN_OSPEED_MEDIUM(14) | \
    PIN_OSPEED_VERYLOW(15) | \
    0)

#define VAL_GPIOA_PUPDR ( \
    PIN_PUPDR_PULLUP(0) | \
    PIN_PUPDR_PULLUP(1) | \
    PIN_PUPDR_PULLUP(2) | \
    PIN_PUPDR_PULLUP(3) | \
    PIN_PUPDR_PULLUP(4) | \
    PIN_PUPDR_PULLUP(5) | \
    PIN_PUPDR_PULLUP(6) | \
    PIN_PUPDR_PULLUP(7) | \
    PIN_PUPDR_PULLUP(8) | \
    PIN_PUPDR_PULLUP(9) | \
    PIN_PUPDR_PULLUP(10) | \
    PIN_PUPDR_PULLUP(11) | \
    PIN_PUPDR_PULLUP(12) | \
    PIN_PUPDR_PULLUP(13) | \
    PIN_PUPDR_PULLUP(14) | \
    PIN_PUPDR_PULLUP(15) | \
    0)

#define VAL_GPIOA_ODR ( \
    PIN_ODR_HIGH(0) | \
    PIN_ODR_HIGH(1) | \
    PIN_ODR_HIGH(2) | \
    PIN_ODR_HIGH(3) | \
    PIN_ODR_HIGH(4) | \
    PIN_ODR_HIGH(5) | \
    PIN_ODR_HIGH(6) | \
    PIN_ODR_HIGH(7) | \
    PIN_ODR_HIGH(8) | \
    PIN_ODR_HIGH(9) | \
    PIN_ODR_HIGH(10) | \
    PIN_ODR_HIGH(11) | \
    PIN_ODR_HIGH(12) | \
    PIN_ODR_HIGH(13) | \
    PIN_ODR_HIGH(14) | \
    PIN_ODR_HIGH(15) | \
    0)

#define VAL_GPIOA_AFRL ( \
    PIN_AFIO_AF(0, 0) | \
    PIN_AFIO_AF(1, 0) | \
    PIN_AFIO_AF(2, 0) | \
    PIN_AFIO_AF(3, 0) | \
    PIN_AFIO_AF(4, 0) | \
    PIN_AFIO_AF(5, 5) | \
    PIN_AFIO_AF(6, 5) | \
    PIN_AFIO_AF(7, 5) | \
    0)

#define VAL_GPIOA_AFRH ( \
    PIN_AFIO_AF(8, 0) | \
    PIN_AFIO_AF(9, 0) | \
    PIN_AFIO_AF(10, 0) | \
    PIN_AFIO_AF(11, 14) | \
    PIN_AFIO_AF(12, 14) | \
    PIN_AFIO_AF(13, 0) | \
    PIN_AFIO_AF(14, 0) | \
    PIN_AFIO_AF(15, 0) | \
    0)

/* PORT B */
#define VAL_GPIOB_MODER ( \
    PIN_MODE_ALTERNATE(0) | \
    PIN_MODE_INPUT(1) | \
    PIN_MODE_ANALOG(2) | \
    PIN_MODE_ANALOG(3) | \
    PIN_MODE_ALTERNATE(4) | \
    PIN_MODE_ANALOG(5) | \
    PIN_MODE_ALTERNATE(6) | \
    PIN_MODE_ALTERNATE(7) | \
    PIN_MODE_ANALOG(8) | \
    PIN_MODE_ANALOG(9) | \
    PIN_MODE_ANALOG(10) | \
    PIN_MODE_ANALOG(11) | \
    PIN_MODE_INPUT(12) | \
    PIN_MODE_ALTERNATE(13) | \
    PIN_MODE_ALTERNATE(14) | \
    PIN_MODE_ALTERNATE(15) | \
    0)

#define VAL_GPIOB_OTYPER ( \
    PIN_OTYPE_PUSHPULL(0) | \
    PIN_OTYPE_PUSHPULL(1) | \
    PIN_OTYPE_PUSHPULL(2) | \
    PIN_OTYPE_PUSHPULL(3) | \
    PIN_OTYPE_PUSHPULL(4) | \
    PIN_OTYPE_PUSHPULL(5) | \
    PIN_OTYPE_PUSHPULL(6) | \
    PIN_OTYPE_PUSHPULL(7) | \
    PIN_OTYPE_PUSHPULL(8) | \
    PIN_OTYPE_PUSHPULL(9) | \
    PIN_OTYPE_PUSHPULL(10) | \
    PIN_OTYPE_PUSHPULL(11) | \
    PIN_OTYPE_PUSHPULL(12) | \
    PIN_OTYPE_PUSHPULL(13) | \
    PIN_OTYPE_PUSHPULL(14) | \
    PIN_OTYPE_PUSHPULL(15) | \
    0)

#define VAL_GPIOB_OSPEEDR ( \
    PIN_OSPEED_MEDIUM(0) | \
    PIN_OSPEED_VERYLOW(1) | \
    PIN_OSPEED_VERYLOW(2) | \
    PIN_OSPEED_VERYLOW(3) | \
    PIN_OSPEED_MEDIUM(4) | \
    PIN_OSPEED_VERYLOW(5) | \
    PIN_OSPEED_MEDIUM(6) | \
    PIN_OSPEED_MEDIUM(7) | \
    PIN_OSPEED_VERYLOW(8) | \
    PIN_OSPEED_VERYLOW(9) | \
    PIN_OSPEED_VERYLOW(10) | \
    PIN_OSPEED_VERYLOW(11) | \
    PIN_OSPEED_VERYLOW(12) | \
    PIN_OSPEED_MEDIUM(13) | \
    PIN_OSPEED_MEDIUM(14) | \
    PIN_OSPEED_MEDIUM(15) | \
    0)

#define VAL_GPIOB_PUPDR ( \
    PIN_PUPDR_PULLUP(0) | \
    PIN_PUPDR_PULLUP(1) | \
    PIN_PUPDR_PULLUP(2) | \
    PIN_PUPDR_PULLUP(3) | \
    PIN_PUPDR_PULLUP(4) | \
    PIN_PUPDR_PULLUP(5) | \
    PIN_PUPDR_PULLUP(6) | \
    PIN_PUPDR_PULLUP(7) | \
    PIN_PUPDR_PULLUP(8) | \
    PIN_PUPDR_PULLUP(9) | \
    PIN_PUPDR_PULLUP(10) | \
    PIN_PUPDR_PULLUP(11) | \
    PIN_PUPDR_PULLUP(12) | \
    PIN_PUPDR_PULLUP(13) | \
    PIN_PUPDR_PULLUP(14) | \
    PIN_PUPDR_PULLUP(15) | \
    0)

#define VAL_GPIOB_ODR ( \
    PIN_ODR_HIGH(0) | \
    PIN_ODR_HIGH(1) | \
    PIN_ODR_HIGH(2) | \
    PIN_ODR_HIGH(3) | \
    PIN_ODR_HIGH(4) | \
    PIN_ODR_HIGH(5) | \
    PIN_ODR_HIGH(6) | \
    PIN_ODR_HIGH(7) | \
    PIN_ODR_HIGH(8) | \
    PIN_ODR_HIGH(9) | \
    PIN_ODR_HIGH(10) | \
    PIN_ODR_HIGH(11) | \
    PIN_ODR_HIGH(12) | \
    PIN_ODR_HIGH(13) | \
    PIN_ODR_HIGH(14) | \
    PIN_ODR_HIGH(15) | \
    0)

#define VAL_GPIOB_AFRL ( \
    PIN_AFIO_AF(0, 0) | \
    PIN_AFIO_AF(1, 0) | \
    PIN_AFIO_AF(2, 0) | \
    PIN_AFIO_AF(3, 0) | \
    PIN_AFIO_AF(4, 0) | \
    PIN_AFIO_AF(5, 0) | \
    PIN_AFIO_AF(6, 4) | \
    PIN_AFIO_AF(7, 4) | \
    0)

#define VAL_GPIOB_AFRH ( \
    PIN_AFIO_AF(8, 0) | \
    PIN_AFIO_AF(9, 0) | \
    PIN_AFIO_AF(10, 0) | \
    PIN_AFIO_AF(11, 0) | \
    PIN_AFIO_AF(12, 0) | \
    PIN_AFIO_AF(13, 5) | \
    PIN_AFIO_AF(14, 5) | \
    PIN_AFIO_AF(15, 5) | \
    0)

/* PORT C */
#define VAL_GPIOC_MODER ( \
    PIN_MODE_ANALOG(0) | \
    PIN_MODE_ANALOG(1) | \
    PIN_MODE_ANALOG(2) | \
    PIN_MODE_ANALOG(3) | \
    PIN_MODE_ANALOG(4) | \
    PIN_MODE_ANALOG(5) | \
    PIN_MODE_ANALOG(6) | \
    PIN_MODE_ANALOG(7) | \
    PIN_MODE_ANALOG(8) | \
    PIN_MODE_ANALOG(9) | \
    PIN_MODE_ANALOG(10) | \
    PIN_MODE_ANALOG(11) | \
    PIN_MODE_ANALOG(12) | \
    PIN_MODE_OUTPUT(13) | \
    PIN_MODE_OUTPUT(14) | \
    PIN_MODE_ANALOG(15) | \
    0)

#define VAL_GPIOC_OTYPER ( \
    PIN_OTYPE_PUSHPULL(0) | \
    PIN_OTYPE_PUSHPULL(1) | \
    PIN_OTYPE_PUSHPULL(2) | \
    PIN_OTYPE_PUSHPULL(3) | \
    PIN_OTYPE_PUSHPULL(4) | \
    PIN_OTYPE_PUSHPULL(5) | \
    PIN_OTYPE_PUSHPULL(6) | \
    PIN_OTYPE_PUSHPULL(7) | \
    PIN_OTYPE_PUSHPULL(8) | \
    PIN_OTYPE_PUSHPULL(9) | \
    PIN_OTYPE_PUSHPULL(10) | \
    PIN_OTYPE_PUSHPULL(11) | \
    PIN_OTYPE_PUSHPULL(12) | \
    PIN_OTYPE_PUSHPULL(13) | \
    PIN_OTYPE_PUSHPULL(14) | \
    PIN_OTYPE_PUSHPULL(15) | \
    0)

#define VAL_GPIOC_OSPEEDR ( \
    PIN_OSPEED_VERYLOW(0) | \
    PIN_OSPEED_VERYLOW(1) | \
    PIN_OSPEED_VERYLOW(2) | \
    PIN_OSPEED_VERYLOW(3) | \
    PIN_OSPEED_VERYLOW(4) | \
    PIN_OSPEED_VERYLOW(5) | \
    PIN_OSPEED_VERYLOW(6) | \
    PIN_OSPEED_VERYLOW(7) | \
    PIN_OSPEED_VERYLOW(8) | \
    PIN_OSPEED_VERYLOW(9) | \
    PIN_OSPEED_VERYLOW(10) | \
    PIN_OSPEED_VERYLOW(11) | \
    PIN_OSPEED_VERYLOW(12) | \
    PIN_OSPEED_VERYLOW(13) | \
    PIN_OSPEED_VERYLOW(14) | \
    PIN_OSPEED_VERYLOW(15) | \
    0)

#define VAL_GPIOC_PUPDR ( \
    PIN_PUPDR_PULLUP(0) | \
    PIN_PUPDR_PULLUP(1) | \
    PIN_PUPDR_PULLUP(2) | \
    PIN_PUPDR_PULLUP(3) | \
    PIN_PUPDR_PULLUP(4) | \
    PIN_PUPDR_PULLUP(5) | \
    PIN_PUPDR_PULLUP(6) | \
    PIN_PUPDR_PULLUP(7) | \
    PIN_PUPDR_PULLUP(8) | \
    PIN_PUPDR_PULLUP(9) | \
    PIN_PUPDR_PULLUP(10) | \
    PIN_PUPDR_PULLUP(11) | \
    PIN_PUPDR_PULLUP(12) | \
    PIN_PUPDR_PULLUP(13) | \
    PIN_PUPDR_PULLUP(14) | \
    PIN_PUPDR_PULLUP(15) | \
    0)

#define VAL_GPIOC_ODR ( \
    PIN_ODR_HIGH(0) | \
    PIN_ODR_HIGH(1) | \
    PIN_ODR_HIGH(2) | \
    PIN_ODR_HIGH(3) | \
    PIN_ODR_HIGH(4) | \
    PIN_ODR_HIGH(5) | \
    PIN_ODR_HIGH(6) | \
    PIN_ODR_HIGH(7) | \
    PIN_ODR_HIGH(8) | \
    PIN_ODR_HIGH(9) | \
    PIN_ODR_HIGH(10) | \
    PIN_ODR_HIGH(11) | \
    PIN_ODR_HIGH(12) | \
    PIN_ODR_HIGH(13) | \
    PIN_ODR_HIGH(14) | \
    PIN_ODR_HIGH(15) | \
    0)

#define VAL_GPIOC_AFRL ( \
    PIN_AFIO_AF(0, 0) | \
    PIN_AFIO_AF(1, 0) | \
    PIN_AFIO_AF(2, 0) | \
    PIN_AFIO_AF(3, 0) | \
    PIN_AFIO_AF(4, 0) | \
    PIN_AFIO_AF(5, 0) | \
    PIN_AFIO_AF(6, 0) | \
    PIN_AFIO_AF(7, 0) | \
    0)

#define VAL_GPIOC_AFRH ( \
    PIN_AFIO_AF(8, 0) | \
    PIN_AFIO_AF(9, 0) | \
    PIN_AFIO_AF(10, 0) | \
    PIN_AFIO_AF(11, 0) | \
    PIN_AFIO_AF(12, 0) | \
    PIN_AFIO_AF(13, 0) | \
    PIN_AFIO_AF(14, 0) | \
    PIN_AFIO_AF(15, 0) | \
    0)

/* PORT D */
#define VAL_GPIOD_MODER ( \
    PIN_MODE_ANALOG(0) | \
    PIN_MODE_ANALOG(1) | \
    PIN_MODE_ANALOG(2) | \
    PIN_MODE_ANALOG(3) | \
    PIN_MODE_ANALOG(4) | \
    PIN_MODE_ANALOG(5) | \
    PIN_MODE_ANALOG(6) | \
    PIN_MODE_ANALOG(7) | \
    PIN_MODE_ANALOG(8) | \
    PIN_MODE_ANALOG(9) | \
    PIN_MODE_ANALOG(10) | \
    PIN_MODE_ANALOG(11) | \
    PIN_MODE_ANALOG(12) | \
    PIN_MODE_ANALOG(13) | \
    PIN_MODE_ANALOG(14) | \
    PIN_MODE_ANALOG(15) | \
    0)

#define VAL_GPIOD_OTYPER ( \
    PIN_OTYPE_PUSHPULL(0) | \
    PIN_OTYPE_PUSHPULL(1) | \
    PIN_OTYPE_PUSHPULL(2) | \
    PIN_OTYPE_PUSHPULL(3) | \
    PIN_OTYPE_PUSHPULL(4) | \
    PIN_OTYPE_PUSHPULL(5) | \
    PIN_OTYPE_PUSHPULL(6) | \
    PIN_OTYPE_PUSHPULL(7) | \
    PIN_OTYPE_PUSHPULL(8) | \
    PIN_OTYPE_PUSHPULL(9) | \
    PIN_OTYPE_PUSHPULL(10) | \
    PIN_OTYPE_PUSHPULL(11) | \
    PIN_OTYPE_PUSHPULL(12) | \
    PIN_OTYPE_PUSHPULL(13) | \
    PIN_OTYPE_PUSHPULL(14) | \
    PIN_OTYPE_PUSHPULL(15) | \
    0)

#define VAL_GPIOD_OSPEEDR ( \
    PIN_OSPEED_VERYLOW(0) | \
    PIN_OSPEED_VERYLOW(1) | \
    PIN_OSPEED_VERYLOW(2) | \
    PIN_OSPEED_VERYLOW(3) | \
    PIN_OSPEED_VERYLOW(4) | \
    PIN_OSPEED_VERYLOW(5) | \
    PIN_OSPEED_VERYLOW(6) | \
    PIN_OSPEED_VERYLOW(7) | \
    PIN_OSPEED_VERYLOW(8) | \
    PIN_OSPEED_VERYLOW(9) | \
    PIN_OSPEED_VERYLOW(10) | \
    PIN_OSPEED_VERYLOW(11) | \
    PIN_OSPEED_VERYLOW(12) | \
    PIN_OSPEED_VERYLOW(13) | \
    PIN_OSPEED_VERYLOW(14) | \
    PIN_OSPEED_VERYLOW(15) | \
    0)

#define VAL_GPIOD_PUPDR ( \
    PIN_PUPDR_PULLUP(0) | \
    PIN_PUPDR_PULLUP(1) | \
    PIN_PUPDR_PULLUP(2) | \
    PIN_PUPDR_PULLUP(3) | \
    PIN_PUPDR_PULLUP(4) | \
    PIN_PUPDR_PULLUP(5) | \
    PIN_PUPDR_PULLUP(6) | \
    PIN_PUPDR_PULLUP(7) | \
    PIN_PUPDR_PULLUP(8) | \
    PIN_PUPDR_PULLUP(9) | \
    PIN_PUPDR_PULLUP(10) | \
    PIN_PUPDR_PULLUP(11) | \
    PIN_PUPDR_PULLUP(12) | \
    PIN_PUPDR_PULLUP(13) | \
    PIN_PUPDR_PULLUP(14) | \
    PIN_PUPDR_PULLUP(15) | \
    0)

#define VAL_GPIOD_ODR ( \
    PIN_ODR_HIGH(0) | \
    PIN_ODR_HIGH(1) | \
    PIN_ODR_HIGH(2) | \
    PIN_ODR_HIGH(3) | \
    PIN_ODR_HIGH(4) | \
    PIN_ODR_HIGH(5) | \
    PIN_ODR_HIGH(6) | \
    PIN_ODR_HIGH(7) | \
    PIN_ODR_HIGH(8) | \
    PIN_ODR_HIGH(9) | \
    PIN_ODR_HIGH(10) | \
    PIN_ODR_HIGH(11) | \
    PIN_ODR_HIGH(12) | \
    PIN_ODR_HIGH(13) | \
    PIN_ODR_HIGH(14) | \
    PIN_ODR_HIGH(15) | \
    0)

#define VAL_GPIOD_AFRL ( \
    PIN_AFIO_AF(0, 0) | \
    PIN_AFIO_AF(1, 0) | \
    PIN_AFIO_AF(2, 0) | \
    PIN_AFIO_AF(3, 0) | \
    PIN_AFIO_AF(4, 0) | \
    PIN_AFIO_AF(5, 0) | \
    PIN_AFIO_AF(6, 0) | \
    PIN_AFIO_AF(7, 0) | \
    0)

#define VAL_GPIOD_AFRH ( \
    PIN_AFIO_AF(8, 0) | \
    PIN_AFIO_AF(9, 0) | \
    PIN_AFIO_AF(10, 0) | \
    PIN_AFIO_AF(11, 0) | \
    PIN_AFIO_AF(12, 0) | \
    PIN_AFIO_AF(13, 0) | \
    PIN_AFIO_AF(14, 0) | \
    PIN_AFIO_AF(15, 0) | \
    0)

/* PORT E */
#define VAL_GPIOE_MODER ( \
    PIN_MODE_ANALOG(0) | \
    PIN_MODE_ANALOG(1) | \
    PIN_MODE_ANALOG(2) | \
    PIN_MODE_ANALOG(3) | \
    PIN_MODE_ANALOG(4) | \
    PIN_MODE_ANALOG(5) | \
    PIN_MODE_ANALOG(6) | \
    PIN_MODE_ANALOG(7) | \
    PIN_MODE_ANALOG(8) | \
    PIN_MODE_ANALOG(9) | \
    PIN_MODE_ANALOG(10) | \
    PIN_MODE_ANALOG(11) | \
    PIN_MODE_ANALOG(12) | \
    PIN_MODE_ANALOG(13) | \
    PIN_MODE_ANALOG(14) | \
    PIN_MODE_ANALOG(15) | \
    0)

#define VAL_GPIOE_OTYPER ( \
    PIN_OTYPE_PUSHPULL(0) | \
    PIN_OTYPE_PUSHPULL(1) | \
    PIN_OTYPE_PUSHPULL(2) | \
    PIN_OTYPE_PUSHPULL(3) | \
    PIN_OTYPE_PUSHPULL(4) | \
    PIN_OTYPE_PUSHPULL(5) | \
    PIN_OTYPE_PUSHPULL(6) | \
    PIN_OTYPE_PUSHPULL(7) | \
    PIN_OTYPE_PUSHPULL(8) | \
    PIN_OTYPE_PUSHPULL(9) | \
    PIN_OTYPE_PUSHPULL(10) | \
    PIN_OTYPE_PUSHPULL(11) | \
    PIN_OTYPE_PUSHPULL(12) | \
    PIN_OTYPE_PUSHPULL(13) | \
    PIN_OTYPE_PUSHPULL(14) | \
    PIN_OTYPE_PUSHPULL(15) | \
    0)

#define VAL_GPIOE_OSPEEDR ( \
    PIN_OSPEED_VERYLOW(0) | \
    PIN_OSPEED_VERYLOW(1) | \
    PIN_OSPEED_VERYLOW(2) | \
    PIN_OSPEED_VERYLOW(3) | \
    PIN_OSPEED_VERYLOW(4) | \
    PIN_OSPEED_VERYLOW(5) | \
    PIN_OSPEED_VERYLOW(6) | \
    PIN_OSPEED_VERYLOW(7) | \
    PIN_OSPEED_VERYLOW(8) | \
    PIN_OSPEED_VERYLOW(9) | \
    PIN_OSPEED_VERYLOW(10) | \
    PIN_OSPEED_VERYLOW(11) | \
    PIN_OSPEED_VERYLOW(12) | \
    PIN_OSPEED_VERYLOW(13) | \
    PIN_OSPEED_VERYLOW(14) | \
    PIN_OSPEED_VERYLOW(15) | \
    0)

#define VAL_GPIOE_PUPDR ( \
    PIN_PUPDR_PULLUP(0) | \
    PIN_PUPDR_PULLUP(1) | \
    PIN_PUPDR_PULLUP(2) | \
    PIN_PUPDR_PULLUP(3) | \
    PIN_PUPDR_PULLUP(4) | \
    PIN_PUPDR_PULLUP(5) | \
    PIN_PUPDR_PULLUP(6) | \
    PIN_PUPDR_PULLUP(7) | \
    PIN_PUPDR_PULLUP(8) | \
    PIN_PUPDR_PULLUP(9) | \
    PIN_PUPDR_PULLUP(10) | \
    PIN_PUPDR_PULLUP(11) | \
    PIN_PUPDR_PULLUP(12) | \
    PIN_PUPDR_PULLUP(13) | \
    PIN_PUPDR_PULLUP(14) | \
    PIN_PUPDR_PULLUP(15) | \
    0)

#define VAL_GPIOE_ODR ( \
    PIN_ODR_HIGH(0) | \
    PIN_ODR_HIGH(1) | \
    PIN_ODR_HIGH(2) | \
    PIN_ODR_HIGH(3) | \
    PIN_ODR_HIGH(4) | \
    PIN_ODR_HIGH(5) | \
    PIN_ODR_HIGH(6) | \
    PIN_ODR_HIGH(7) | \
    PIN_ODR_HIGH(8) | \
    PIN_ODR_HIGH(9) | \
    PIN_ODR_HIGH(10) | \
    PIN_ODR_HIGH(11) | \
    PIN_ODR_HIGH(12) | \
    PIN_ODR_HIGH(13) | \
    PIN_ODR_HIGH(14) | \
    PIN_ODR_HIGH(15) | \
    0)

#define VAL_GPIOE_AFRL ( \
    PIN_AFIO_AF(0, 0) | \
    PIN_AFIO_AF(1, 0) | \
    PIN_AFIO_AF(2, 0) | \
    PIN_AFIO_AF(3, 0) | \
    PIN_AFIO_AF(4, 0) | \
    PIN_AFIO_AF(5, 0) | \
    PIN_AFIO_AF(6, 0) | \
    PIN_AFIO_AF(7, 0) | \
    0)

#define VAL_GPIOE_AFRH ( \
    PIN_AFIO_AF(8, 0) | \
    PIN_AFIO_AF(9, 0) | \
    PIN_AFIO_AF(10, 0) | \
    PIN_AFIO_AF(11, 0) | \
    PIN_AFIO_AF(12, 0) | \
    PIN_AFIO_AF(13, 0) | \
    PIN_AFIO_AF(14, 0) | \
    PIN_AFIO_AF(15, 0) | \
    0)

/* PORT F */
#define VAL_GPIOF_MODER ( \
    PIN_MODE_ANALOG(0) | \
    PIN_MODE_ANALOG(1) | \
    PIN_MODE_ANALOG(2) | \
    PIN_MODE_ANALOG(3) | \
    PIN_MODE_ANALOG(4) | \
    PIN_MODE_ANALOG(5) | \
    PIN_MODE_ANALOG(6) | \
    PIN_MODE_ANALOG(7) | \
    PIN_MODE_ANALOG(8) | \
    PIN_MODE_ANALOG(9) | \
    PIN_MODE_ANALOG(10) | \
    PIN_MODE_ANALOG(11) | \
    PIN_MODE_ANALOG(12) | \
    PIN_MODE_ANALOG(13) | \
    PIN_MODE_ANALOG(14) | \
    PIN_MODE_ANALOG(15) | \
    0)

#define VAL_GPIOF_OTYPER ( \
    PIN_OTYPE_PUSHPULL(0) | \
    PIN_OTYPE_PUSHPULL(1) | \
    PIN_OTYPE_PUSHPULL(2) | \
    PIN_OTYPE_PUSHPULL(3) | \
    PIN_OTYPE_PUSHPULL(4) | \
    PIN_OTYPE_PUSHPULL(5) | \
    PIN_OTYPE_PUSHPULL(6) | \
    PIN_OTYPE_PUSHPULL(7) | \
    PIN_OTYPE_PUSHPULL(8) | \
    PIN_OTYPE_PUSHPULL(9) | \
    PIN_OTYPE_PUSHPULL(10) | \
    PIN_OTYPE_PUSHPULL(11) | \
    PIN_OTYPE_PUSHPULL(12) | \
    PIN_OTYPE_PUSHPULL(13) | \
    PIN_OTYPE_PUSHPULL(14) | \
    PIN_OTYPE_PUSHPULL(15) | \
    0)

#define VAL_GPIOF_OSPEEDR ( \
    PIN_OSPEED_VERYLOW(0) | \
    PIN_OSPEED_VERYLOW(1) | \
    PIN_OSPEED_VERYLOW(2) | \
    PIN_OSPEED_VERYLOW(3) | \
    PIN_OSPEED_VERYLOW(4) | \
    PIN_OSPEED_VERYLOW(5) | \
    PIN_OSPEED_VERYLOW(6) | \
    PIN_OSPEED_VERYLOW(7) | \
    PIN_OSPEED_VERYLOW(8) | \
    PIN_OSPEED_VERYLOW(9) | \
    PIN_OSPEED_VERYLOW(10) | \
    PIN_OSPEED_VERYLOW(11) | \
    PIN_OSPEED_VERYLOW(12) | \
    PIN_OSPEED_VERYLOW(13) | \
    PIN_OSPEED_VERYLOW(14) | \
    PIN_OSPEED_VERYLOW(15) | \
    0)

#define VAL_GPIOF_PUPDR ( \
    PIN_PUPDR_PULLUP(0) | \
    PIN_PUPDR_PULLUP(1) | \
    PIN_PUPDR_PULLUP(2) | \
    PIN_PUPDR_PULLUP(3) | \
    PIN_PUPDR_PULLUP(4) | \
    PIN_PUPDR_PULLUP(5) | \
    PIN_PUPDR_PULLUP(6) | \
    PIN_PUPDR_PULLUP(7) | \
    PIN_PUPDR_PULLUP(8) | \
    PIN_PUPDR_PULLUP(9) | \
    PIN_PUPDR_PULLUP(10) | \
    PIN_PUPDR_PULLUP(11) | \
    PIN_PUPDR_PULLUP(12) | \
    PIN_PUPDR_PULLUP(13) | \
    PIN_PUPDR_PULLUP(14) | \
    PIN_PUPDR_PULLUP(15) | \
    0)

#define VAL_GPIOF_ODR ( \
    PIN_ODR_HIGH(0) | \
    PIN_ODR_HIGH(1) | \
    PIN_ODR_HIGH(2) | \
    PIN_ODR_HIGH(3) | \
    PIN_ODR_HIGH(4) | \
    PIN_ODR_HIGH(5) | \
    PIN_ODR_HIGH(6) | \
    PIN_ODR_HIGH(7) | \
    PIN_ODR_HIGH(8) | \
    PIN_ODR_HIGH(9) | \
    PIN_ODR_HIGH(10) | \
    PIN_ODR_HIGH(11) | \
    PIN_ODR_HIGH(12) | \
    PIN_ODR_HIGH(13) | \
    PIN_ODR_HIGH(14) | \
    PIN_ODR_HIGH(15) | \
    0)

#define VAL_GPIOF_AFRL ( \
    PIN_AFIO_AF(0, 0) | \
    PIN_AFIO_AF(1, 0) | \
    PIN_AFIO_AF(2, 0) | \
    PIN_AFIO_AF(3, 0) | \
    PIN_AFIO_AF(4, 0) | \
    PIN_AFIO_AF(5, 0) | \
    PIN_AFIO_AF(6, 0) | \
    PIN_AFIO_AF(7, 0) | \
    0)

#define VAL_GPIOF_AFRH ( \
    PIN_AFIO_AF(8, 0) | \
    PIN_AFIO_AF(9, 0) | \
    PIN_AFIO_AF(10, 0) | \
    PIN_AFIO_AF(11, 0) | \
    PIN_AFIO_AF(12, 0) | \
    PIN_AFIO_AF(13, 0) | \
    PIN_AFIO_AF(14, 0) | \
    PIN_AFIO_AF(15, 0) | \
    0)


#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* BOARD_H */
