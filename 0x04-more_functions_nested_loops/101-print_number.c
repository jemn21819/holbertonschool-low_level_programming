#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: Integer
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else
	{
		n = n;
	}
	if (n / 10)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	_putchar('\n');
}
