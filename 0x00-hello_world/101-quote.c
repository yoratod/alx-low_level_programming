#!/bin/bash
gcc -S -masm=intel $CFILE
gcc 6-size.c -m32 --o size32 2> /temp/32
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c
