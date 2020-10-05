#include "holberton.h"

/**
 * *_strchr - function that locates a character in a string.
 * @s: string
 * @c: character
 * Return: char or null
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;

		if (s[x] == c)
			return (s);
	}
	if (s[x] == c)
		return (s);
	return ('\0');
}
