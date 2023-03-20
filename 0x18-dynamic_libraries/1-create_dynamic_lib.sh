#!/bin/bash
gcc -Wall -Werror -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBARY_PATH=.:$LD_LIBRARY_PATH
