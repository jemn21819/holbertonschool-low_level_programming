#include "holberton.h"

/**
 * *_memset - function that fills memory with a constant byte.
 * @s: buffer pointer
 * @b: char
 * @n: bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unisigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
