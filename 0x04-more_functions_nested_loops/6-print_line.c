#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: Integer
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x <\ n; x++)
		{
			_putchar('_');
	}
	else
	{
		_putchar('\n');
	}
}
