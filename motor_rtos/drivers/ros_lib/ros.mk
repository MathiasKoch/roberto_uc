# List of all the ChibiOS/RT test files.

ROSFOLDERS	= $(sort $(dir $(wildcard $(ROSLIB)/*)))

ROSSRC 			= $(ROSLIB)/duration.cpp \
	     				$(ROSLIB)/time.cpp

# Required include directories
ROSINC 			= $(ROSLIB)
ROSINC 			+= $(foreach mod, $(ROSFOLDERS), -I$(mod))
