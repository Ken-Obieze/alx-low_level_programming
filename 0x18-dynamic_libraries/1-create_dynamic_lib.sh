#!/bin/bash
gcc -c -fpic -Wall *.c 
gcc -shared -o liball.so *.o
