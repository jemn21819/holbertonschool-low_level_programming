#include "holberton.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9 except 2 and 4
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{

	int x;

	for (x = 48; x <= 57; x++)
	{
		if (x == 50 && x == 52)
			continue;
		_putchar(x);
	}
	_putchar('\n');
	return (0);
}
