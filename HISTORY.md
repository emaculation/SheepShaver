# SheepShaver – history of user-visible changes
Copyright (C) 1997-2006 Christian Bauer and Marc Hellwig

## Version 2.3 (snapshot), 2006-05-14
* Handle up to 1 GB of Mac memory
* Improve SLiRP network emulation performance
* Fix Native QuickDraw acceleration
* Fix a crash during MacOS 9 installation
* Fix a crash in the AppleShare extension
* Fix support for MacOS 7.5.3 Revision 2.2
* Fix gigantic window dimensions on first boot
* Fix extfs volume name to "Unix" (Toshimitsu Tanaka)
* Fix unaligned accesses in SLiRP network emulation (Brian J. Johnson)
* Initial port to IRIX/mips
* **MacOS X:**
  - Port to MacOS X for Intel, including the JIT
  - Add a primitive graphical preferences editor
  - Add support for run-time CD-ROM auto-detection
  - Fix clipboard (copy/paste of text from/to the host OS)
  - Fix extfs to preserve native folder attributes
  - Fix extfs to handle file/folder creation times
  - Fix SLiRP network emulation (workaround MacOS X bugs)
  - Improve overall performance on PowerPC (by a factor 2)
* **Windows:**
  - Add SLiRP network emulation ("ether slirp")
  - Add TAP-Win32 network emulation ("ether tap")
  - Fix CD-ROM auto-detection ("pollmedia" now works)
  - Fix idle sleep ("idlewait" now works)
  - Fix native cursor to be updated as soon as MacOS modified it
  - Improve GUI for network configuration

## Version 2.3 (snapshot), 2005-11-30
* Add fullscreen DGA mode via fbdev in Linux
* Add "screen" prefs item a-la Basilisk II
* Add missing lvsl/lvsr instructions in AltiVec emulation (Adobe FrameMaker)
* Add support for old toolchain (gcc "2.96", glibc 2.2)
* Add user-space network emulation ("ether slirp" in prefs file)
* Add Ethernet and Serial support to Windows
* Add GTK+2 based GUI to Windows
* Add initial port to Darwin/x86 with JIT
* Improve portability of FPU emulation code to non C99 capable systems
* Improve interrupt processing in emulated mode
* Improve idle wait on Linux platforms
* Properly fail to load MacOS < 8.1 with NewWorld ROMs
* Fix native execution in Linux/PowerPC
* Fix PowerPC test-and-set implementation (fix clipboard)
* Fix Ethernet support in Linux, avoid hangs
* Fix occasional hangs during interrupt processing
* Fix High Resolution Timing code for Linux
* Fix support for 4+ GB hard disk images
* Fix SDL/x11 native cursor acceleration
* Fix sheep_net driver to properly work with Linux kernels up to 2.6.11

## Version 2.3 (snapshot), 2005-05-21
* Implement high-precision timings on POSIX systems
* Add other SDL keysym translations
* Add some SSE2 optimizations to the AltiVec emulation core
* Add port to FreeBSD 5.3 and NetBSD 2.0 systems (x86 tested)
* Add initial port to Windows with SDL graphics
* Fix interrupt handling, registers are now fully preserved
* Fix support for native execution on recent Linux/PPC systems
* Fix support for Gossamer ROMs (PowerMac G3 Beige)
* Fix crash in Apple Personal Diagnostics on MacOS 9
* Fix crash in Power Management on MacOS 9

## Version 2.3 (snapshot), 2004-07-07
* Add support for MacOS 9.0.4
* Add native port to MacOS X with SDL graphics
* Fix timebase emulation. UpTime() is now more accurate
* Fix hardware cursor acceleration in X11
* Fix 'r' and <ctrl> key mappings for Apple X11 servers
* Fix video thread cancellation on MacOS X
* Fix detection of PowerPC 750FX and 970 processors

## Version 2.3 (snapshot), 2004-06-09
* Improve generic JIT engine to reach around 1/8-th of native speeds
* Improve 68k audio processing with "reentrant" JIT generated code
* Add Native QuickDraw acceleration for BitBlt (srcCopy) and FillRect
* Add TUN/TAP device support on Linux systems
* Add run-time depth switching. Support at least 1-bpp screens
* Add "idlewait" option to pause SheepShaver when MacOS is idle
* Fix ethernet support on little endian and 64-bit systems
* Fix initialization of NVRAM on first-time use

## Version 2.3 (snapshot), 2004-02-25
* Improved generic JIT, FPU instructions are now translated
* Add AltiVec emulation, emulated CPU is now a PowerPC 7400 (G4)
* Add initial port to MacOS X with an X11 server

## Version 2.3 (snapshot), 2004-01-14
* Fix several CPU emulation bugs, extended testsuite
* Fix FPU emulation, "scrollbar" & Graphing Calculator bugs are gone
* Add support for 64-bit platforms, more precisely AMD64 with JIT
* Add support for copy-paste of text on Unix/X11 systems
* Add support for wheel mice
* Better support for PowerMac PCI ROMs with more generic patches
* Better support for audio output (with pre-G3 PowerMac PCI ROMs)
* Improve native Linux/PPC port

## Version 2.3 (snapshot), 2003-11-25
* Initial public release with PowerPC CPU emulator for testing

## Version 2.2 (release), 2002-02-04
* Source released under GPL
* Integrated code from Basilisk II
