#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/* _putchar */
int _putchar(char c);


/* 0-binary_to_uint.c */
unsigned int binary_to_uint(const char *b);


/* 1-print_binary.c */
void print_binary(unsigned long int n);


/* 2-get_bit.c */
int get_bit(unsigned long int n, unsigned int index);


/* 3-set_bit.c */
int set_bit(unsigned long int *n, unsigned int index);


/* 4-clear_bit.c */
int clear_bit(unsigned long int *n, unsigned int index);



/* 5-flip_bits.c */
unsigned int flip_bits(unsigned long int n, unsigned long int m);


/* 100-get_endianness.c */
int get_endianness(void);


#endif
