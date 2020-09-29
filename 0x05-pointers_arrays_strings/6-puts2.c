#include "holberton.h"

/**
 * puts2 - prints every other character of a string, starting with first char
 * @str: String
 */

void puts2(char *str)
{
	int x = 0;

	while (*(str + x) != '\0')
	{
		if (x % 10 == 0)
		{
			_putchar(*(str + x));
		}
		x++;
	}
	_putchar('\n');
}
