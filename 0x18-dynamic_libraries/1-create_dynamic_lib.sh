#!/bin/bash
gcc -Wall -Werror -pedantic -Wextra -fPIC -c *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
