#include "holberton.h"

/**
 * *_strncat - concatenates two strings.
 * @dest: dest string
 * @src: Source string
 * @n: numbers of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int x = 0;
	int y;

	while (dest[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < n; y++)
	{
		if (src[y] == '\0')
		{
			break;
		}
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
