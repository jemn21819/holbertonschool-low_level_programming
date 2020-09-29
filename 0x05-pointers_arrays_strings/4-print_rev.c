#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: String
 */

void print_rev(char *s)
{
	int x = 0;
	int y;

	while (*(s + x) != '\0')
	{
		x++;
	}
	for (y = (x - 1); y >= 0; y--)
	{
		_purchar(*(s + y));
	}
	_putchar('\n');
}
