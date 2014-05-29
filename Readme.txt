This is the README file for USBasp.

USBasp is a USB in-circuit programmer for Atmel AVR controllers. It simply
consists of an ATMega88 or an ATMega8 and a couple of passive components.
The programmer uses a firmware-only USB driver, no special USB controller
is needed.

This is a port of the original USBasp (URL see below) to the
signalBoard (see also below).

The plan is to flash this piece of software to the ATmega168 on the
signalBoard, attach another AVR chip (the one to be programmed) to the
signalBoard (a simple daughterboard is planned) and then use avrdude
with usbasp target to flash the attached chip.

This should work exactly like programming the signalBoard itself BUT
FOR GOD'S SAKE don't push the reset button like usual or you will
flash your signalBoard instead of the target chip...

Currently all of this is untested.


LICENSE

USBasp (as well as all of this source code) is distributed under the
terms and conditions of the GNU GPL version 2 (see
"usbdrv/License.txt" for details).

USBasp is built with V-USB driver by OBJECTIVE DEVELOPMENT GmbH. See
"usbdrv/" for further information.


MORE INFORMATION

For more information on USBasp and it's components please visit the
following URLs:

USBasp .......................... http://www.fischl.de/usbasp/

signalBoard ..................... https://hannover.ccc.de/redmine/projects/signalboard

Firmware-only V-USB driver ...... http://www.obdev.at/products/vusb/
avrdude ......................... http://www.nongnu.org/avrdude/
libusb .......................... http://libusb.sourceforge.net/
libusb-win32 .................... http://libusb-win32.sourceforge.net/
