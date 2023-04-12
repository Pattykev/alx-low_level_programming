#!/bin/bash

# a script that creates a static library
# called liball.a from all the .c files
# that are in the current directory

gcc -c *.c
ar -rcs liball.a *.o
ranlib liball.a
