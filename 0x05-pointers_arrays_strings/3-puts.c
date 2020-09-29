#include "holberton.h"

/**
 * _puts - rints a string, followed by a new line, to stdout
 * @str: String
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
