#include "holberton.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: main string
 * @needle: substring
 * Return: pinter of the string or null
 */
char *_strstr(char *haystack, char *needle)
{
	int x;
	int y;

	if (*needle == '\0')
		return (haystack);
	if (*needle == 0)
		return (haystack);

	for (i = 0; haystack[x] != '\0'; x++)
	{
		y = 0;
		while (haystack[x + y] == needle[y])
			y++;
		if (needle[y] == '\0')
			return (&haystack[x]);
	}
	return ('\0');
}
