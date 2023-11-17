#!/bin/bash

#a script that creates static library
#called liball.a from all .c files

gcc -c *.c
ar rc liball.a *.o
echo y | rm -I *.o
