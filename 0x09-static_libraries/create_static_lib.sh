#!/bin/bash
gcc -c -Wall -pedantic -Werror -Wextra -c *.C
ar -rc liball.a *.o
