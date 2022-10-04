#!/bin/bash
wget -P /tmp https://github.com/holbertonschool/0x18.c.git/gm
export LD_PRELOAD=/tmp/libmask.so
