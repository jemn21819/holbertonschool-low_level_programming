#include "holberton.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 for big endian, 1 for little endian.
 */

int get_endianness(void)
{
	unsigned int x = 1;

	return ((int) (((char *)&x)[0]));
}
