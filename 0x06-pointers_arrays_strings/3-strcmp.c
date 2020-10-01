#include "holberton.h"

/**
 * *_strcmp - function that compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] && s2[x]; x++)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
	}
	return (0);
}
