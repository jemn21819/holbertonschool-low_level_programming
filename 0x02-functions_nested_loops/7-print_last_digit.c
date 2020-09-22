#include "holberton.h"

/**
 * print_last_digit - Print last digit of a number
 *
 * @n: integer
 * Return: r integer value
 */

int print_last_digit(int n)
{

	n = n % 10;
	if (n < 0)
	{
		n = (n * -1);
	}
	_putchar(n + '0');
	return (n);
}
