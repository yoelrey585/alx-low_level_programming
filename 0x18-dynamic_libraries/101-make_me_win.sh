#!/bin/bash
wget -P /tmp/ https://github.com/yoelrey585/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD =/tmp/libtest.so