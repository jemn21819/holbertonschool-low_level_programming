#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: original string
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int x;
	char *p;

	if (!str)
		return (NULL);
	for (x = 0; str[x]; x++)
		;
	p = malloc(sizeof(char) * (x + 1));
	if (!p)
		return (NULL);
	for (x = 0; str[x]; x++)
		p[x] = str[x];
	p[x] = '\0';
	return (p);
}
