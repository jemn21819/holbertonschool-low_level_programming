#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string
 * @accept: bytes accepted
 * Return: Number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int res = 0;

	int x = 0;
	int y, z;

	while (s[x] != '\0')
	{
		x++;
	}
	for (y = 0; accept[y] >= 0; y++)
	{
		if (s[x] == accept[y])
		{
			res++;
			break;
		}
		if (accept[y] == '\0')
			return (res);
	}
	return (res);
}
