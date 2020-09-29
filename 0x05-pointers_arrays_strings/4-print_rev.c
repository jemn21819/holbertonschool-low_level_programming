#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: String
 */

void print_rev(char *s)
{
	int x = 0;

	for (x = 48; s[x] != 48; x++)
	{
		for (x-- ; x >= 0; x--)
		{
			_purchar(s[x]);
		}
	}
	_putchar('\n');
}
