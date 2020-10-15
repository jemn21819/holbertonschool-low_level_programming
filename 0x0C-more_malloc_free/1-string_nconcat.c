#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}


/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: Second string
 * @n: number of bytes
 * Return: content s1 and content s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, len1, len2, size;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n > len2)
		n = len2;
	size = len1 + n;
	p = malloc(sizeof(char) * size + 1);
	if (!p)
		return (NULL);
	for (x = 0; x < len1; x++)
		p[x] = s1[x];
	for (y = 0; y < n; y++, x++)
		p[x] = s2[y];
	p[x] = '\0';
	return (p);
}
