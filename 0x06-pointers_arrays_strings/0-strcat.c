#include "holberton.h"

/**
 **_strcat - concatenates two strings.
 * @dest: first string
 * @src: second string
 * Return: Ponter dest
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y;

	while (dest[x] != '\0')
	{
		x++;
	}
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
