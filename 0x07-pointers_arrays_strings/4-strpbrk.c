#include "holberton.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: bytes
 * Return: Match
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (s[x] == accpet[y])
				return (s + x);
		}
	}
	return ('\0');
}
