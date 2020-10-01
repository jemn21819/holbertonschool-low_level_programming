#include "holberton.h"

/**
 **_strcat - concatenates two strings.
 * @dest: first string
 * @src: second string
 * Return: Ponter dest
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	for (x = 0; dest[x]; x++)
		;
	for (y = 0; src[y]; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[c + 1] = '\0';
	return (dest);
}
