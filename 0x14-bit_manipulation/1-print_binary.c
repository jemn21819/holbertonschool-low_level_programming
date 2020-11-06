#include "holberton.h"
#include <stdbool.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: input integer
 */
void print_binary(unsigned long int n)
{
	_Bool go = false;
	unsigned long int x;

	short bit = sizeof(n) * 8;

	if (!n)
	{
		return;
	}
	for (; bit >= 0; bit--)
	{
		x = n >> bit;
		if (x & 1)
		{
			go = true;
			_putchar('1');
		}
		else if (go)
			_putchar('0');
	}
}
