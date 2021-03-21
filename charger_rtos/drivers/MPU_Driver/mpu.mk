# List of all the ChibiOS/RT test files.


MPUSRC			= $(MPULIB)/driver/eMPL/inv_mpu.c
MPUSRC			+= $(MPULIB)/driver/eMPL/inv_mpu_dmp_motion_driver.c
MPUSRC			+= $(MPULIB)/eMPL-hal/eMPL_outputs.c
MPUSRC 			+= $(MPULIB)/mllite/data_builder.c
MPUSRC 			+= $(MPULIB)/mllite/hal_outputs.c
MPUSRC 			+= $(MPULIB)/mllite/message_layer.c
MPUSRC 			+= $(MPULIB)/mllite/mlmath.c
MPUSRC 			+= $(MPULIB)/mllite/ml_math_func.c
MPUSRC 			+= $(MPULIB)/mllite/mpl.c
MPUSRC 			+= $(MPULIB)/mllite/results_holder.c
MPUSRC 			+= $(MPULIB)/mllite/start_manager.c
MPUSRC 			+= $(MPULIB)/mllite/storage_manager.c


MPULIBS 		= -L$(MPULIB)/mpl -llibmplmpu

# Required include directories
MPUINC 			= $(MPULIB)/driver/eMPL
MPUINC 			+= $(MPULIB)/driver/include
MPUINC 			+= $(MPULIB)/eMPL-hal
MPUINC 			+= $(MPULIB)/mllite
MPUINC 			+= $(MPULIB)/mpl
