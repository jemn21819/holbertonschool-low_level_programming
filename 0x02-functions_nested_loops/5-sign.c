#include "holberton.h"

/**
 * print_sign - print the sing of a int
 * @n: is a int
 * Return: 0 for zero, 1 for positive and -1 for negative
 */

int print_sign(int n)
{
	if (n > 48)
	{
		_putchar(43);
		_putchar(44);
		_putchar(32);
		return (1);
	}
	else if (n == 48)
	{
		_putchar(48);
		_putchar(44);
		_putchar(32);
		return (0);
	}
	else
	{
		_putchar(45);
		_putchar(44);
		_putchar(32);
		return (-1);
	}
}
