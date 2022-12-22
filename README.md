# ICS2020 Programming Assignment

This project is the programming assignment of the class ICS(Introduction to Computer System)
in Department of Computer Science and Technology, Nanjing University.

For the guide of this programming assignment,
refer to https://nju-projectn.github.io/ics-pa-gitbook/ics2020

Environment setup
'''bash
apt-get install build-essential    # build-essential packages, include binary utilities, gcc, make, and so on
apt-get install man                # on-line reference manual
apt-get install gdb                # GNU debugger
apt-get install git                # revision control system
apt-get install libreadline-dev    # a library to use compile the project later
apt-get install libsdl2-dev        # a library to use compile the project later
apt-get install libc6-dev-i386     # a library to use compile the project later
apt-get install qemu-system        # QEMU
'''

To initialize, run
```bash
bash init.sh subproject-name
```
See `init.sh` for more details.

The following subprojects/components are included. Some of them are not fully implemented.
* [NEMU](https://github.com/NJU-ProjectN/nemu)
* [Abstract-Machine](https://github.com/NJU-ProjectN/abstract-machine)
* [Nanos-lite](https://github.com/NJU-ProjectN/nanos-lite)
* [Navy-apps](https://github.com/NJU-ProjectN/navy-apps)
