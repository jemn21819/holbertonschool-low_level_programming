#include "holberton.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string
 * @c: character
 * Return: char or null
 */

char *_strchr(char *s, char c)
{
	char x;

	for (x = 0; s[x]; x++)
	{
		if (s[x] == c)
		return (s + x);
	}
	if (c == '\0')
	{
		return (s + x);
	}
	return (NULL);
}
