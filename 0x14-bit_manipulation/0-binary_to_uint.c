#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b == '1')
			res = ((res * 2) + 1);
		else if (*b == '0')
			res *= 2;
		else
			return (0);
		b++;
	}
	return (res);
}

