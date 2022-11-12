# libusb DEMO
This a simple project to demonstrate how to include [libusb](https://github.com/libusb/libusb) library in C++ using cmake without relying on -lusb-1.0 or -lusb flags.

libusb is a library for USB device access from Linux, macOS, Windows, OpenBSD/NetBSD, Haiku, Solaris userspace, and WebAssembly via WebUSB. It is written in C (Haiku backend in C++).

This project contain the libusb library precompiled for Linux and Windows.

libusb homepage: [http://libusb.info/](http://libusb.info/)

To use this library you need to have knowledge of how to operate USB devices from a software standpoint (descriptors, configurations, interfaces, endpoints, control/bulk/interrupt/isochronous transfers, etc). 

Full information can be found in the [USB 3.0 Specification](http://www.usb.org/developers/docs/) which is available for free download. You can probably find less verbose introductions by searching the web.
### 1. Compile commands:
```
mkdir build
cd build
cmake ../
cmake --build .
```
### 2. Find executable
If compiling is success you will executable find in:
>For Windows: build\Debug\main.exe

>For Linux: build\main
### 3. Run the demo
>For Windows: 
>```
>cd build\Debug
>main.exe
>```

>For Linux:
>```
>cd build
>./main
>```
### 4. Check results
```
Total USB devices found: 7
Vendor:Device = 8087:8000
Vendor:Device = 1d6b:0002
Vendor:Device = 8087:8008
Vendor:Device = 1d6b:0002
Vendor:Device = 1d6b:0003
Vendor:Device = 062a:4c01
Vendor:Device = 1d6b:0002
```
If you get something like the above then everything is working fine.

>Now you can start adding your own code and build stuff.

# Requirements
* Cmake
>Minimum required VERSION 3.10

* Windows SDK Platform Tools
>If your using windows