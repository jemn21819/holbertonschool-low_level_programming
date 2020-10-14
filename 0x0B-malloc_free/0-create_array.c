#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * *create_array - creates an array of chars
 * initializes it with a specific char
 * @size: size of array
 * @c: char
 * Return: String of char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(sizeof(*p) * size);
	if (!size || !p)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}

