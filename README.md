# Piggu Keyboard Firmware
Firmware for Nordic MCUs used in the Piggu Keyboard, contains precompiled .hex files, as well as sources buildable with the Nordic SDK

The firmware was originally developed by [reversebias](https://github.com/reversebias) for the [Mitosis keyboard](https://github.com/reversebias/mitosis) and has been modified to work with Piggu.

## Install dependencies

Tested on macOS Mojave.

```
brew install openocd
brew tap PX4/homebrew-px4
brew update
brew install gcc-arm-none-eabi
brew install coreutils
```

## Download Nordic SDK

Nordic does not allow redistribution of their SDK or components, so download and extract from their site:

https://developer.nordicsemi.com/nRF5_SDK/nRF5_SDK_v11.x.x/nRF5_SDK_11.0.0_89a8197.zip

Firmware written and tested with version 11

```
unzip nRF5_SDK_11.0.0_89a8197.zip  -d nRF5_SDK_11
cd nRF5_SDK_11
```

## Toolchain set-up

A cofiguration file that came with the SDK needs to be changed. Assuming you installed gcc-arm with apt, the compiler root path needs to be changed in /components/toolchain/gcc/Makefile.posix, the line:
```
GNU_INSTALL_ROOT := /usr/local/gcc-arm-none-eabi-4_9-2015q1
```
Replaced with:
```
GNU_INSTALL_ROOT := /usr/local
```

## Clone repository
Inside nRF5_SDK_11/
```
git clone https://github.com/quanloh/piggu
```
## OpenOCD server
The programming header on the side of the keyboard, from top to bottom:
```
SWCLK
SWDIO
GND
3.3V
```
It's best to remove the battery during long sessions of debugging, as charging non-rechargeable lithium batteries isn't recommended.

Launch a debugging session with:
```
openocd -f piggu/nrf-stlinkv2.cfg
```
Should give you an output ending in:
```
Info : nrf51.cpu: hardware has 4 breakpoints, 2 watchpoints
```
Otherwise you likely have a loose or wrong wire.


## Manual programming
From the factory, these chips need to be erased:
```
echo reset halt | nc localhost 4444
echo nrf51 mass_erase | nc localhost 4444
```
From there, the precompiled binaries can be loaded:
```
echo reset halt | nc localhost 4444
echo flash write_image `greadlink -f precompiled-basic-left.hex` | nc localhost 4444
echo reset | nc localhost 4444
```

### Note:
- ```nc``` is the "new" ```telnet``` in macOS, 
-  ```readlink``` is replaced by ```greadlink``` in macOS, thus the ```brew install coreutils``` is needed.

## Automatic make and programming scripts
To use the automatic build scripts:
```
cd piggu/piggu-keyboard-basic
./program.sh
```
An openocd session should be running in another terminal, as this script sends commands to it.
