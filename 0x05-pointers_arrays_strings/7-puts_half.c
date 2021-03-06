#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int x = 0;
	int y;

	while (*(str + x) != '\0')
	{
		x++;
	}
	for (y = (x % 2) == 0 ? (x / 2) : (x / 2) + 1; y < x; y++)
	{
		_putchar(*(str + y));
	}
	_putchar('\n');
}
