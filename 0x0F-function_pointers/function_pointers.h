#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdlib.h>
#include <stdio.h>

/* _putchar */
int _putchar(char c);


/* 0-print_name.c */
void print_name(char *name, void (*f)(char *));


/* 1-array_iterator.c */
void array_iterator(int *array, size_t size, void (*action)(int));


/* 2-int_index.c */
int int_index(int *array, int size, int (*cmp)(int));


/* 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h */
int (*get_op_func(char *s))(int, int);

#endif
