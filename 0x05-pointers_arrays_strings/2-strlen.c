#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: String
 * Return: String lenght
 */

int _strlen(char *s)
{
	char *p = s;

	while (*s)
	{
		s++;
	}
	return (s - p);
}
