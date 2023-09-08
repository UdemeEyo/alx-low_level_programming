#!/bin/bash
wget -P /tmp/ https://raw.github.com/UdemeEyo/alx-low_level_programming/master/0x18-dynamic_libraries/test.so
export LD_PRELOAD=/pwd/test.so
