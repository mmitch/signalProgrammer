# only set overrides when needed
# defaults are taken from ../Makefile

# extra source file:
SRC = isp.c clock.c tpi.c usbdrv/usbdrv.c $(TARGET).c

# extra assembler file:
ASRC = usbdrv/usbdrvasm.S

# find USB headers
CFLAGS += -Iusbdrv/

# and delegate to the default Makefile:
include Makefile.in
