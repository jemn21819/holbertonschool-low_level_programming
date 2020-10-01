#include "holberton.h"

/**
 * *string_toupper - unction that changes lowercase of a string to uppercase
 * @s: string
 * Return: s
 */

char *string_toupper(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	if (s[x] >= 'a' && s[x] <= 'z')
	{
		s[x] = s[x] - 32;
	}
	return (s);
}
