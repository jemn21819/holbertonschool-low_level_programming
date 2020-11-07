<<<<<<< Updated upstream
#include "holberton.h"
#include <stdbool.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: input integer
 */

void print_binary(unsigned long int n)
{
	if (!n)
	{
		_putchar('0');
	}
	else
	{
		if ((n >> 1) != 0)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}
=======
>>>>>>> Stashed changes
