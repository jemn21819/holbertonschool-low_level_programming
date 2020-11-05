#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: input pointer to unsigned long integer
 * @index: index to change to zero
 * Return: 1 if success, 0 if failure
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(index) * 8)
		return (-1);
	*n = (1 << index) | *n;
	return (1);
}
