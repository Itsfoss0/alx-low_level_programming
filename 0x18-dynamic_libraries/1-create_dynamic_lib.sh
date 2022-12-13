#!/usr/bin/bash
gcc  -Wall -Werror -fPIC -c *.c
gcc -Wall -Werror -shared -o liball.so *.o
