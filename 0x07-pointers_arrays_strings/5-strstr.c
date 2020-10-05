#include "holberton.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: main string
 * @needle: substring
 * Return: pinter of the string or null
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y, z;

	for (x = 0; needle[x] != '\0'; x++)
		;
	for (y = 0, z = 0; haystack[y] != '\0' && needle[z] != '\0'; y++)
	{
		if (haystack[y] == needle[z])
		{
			z++;
		}
		else
		{
			z = 0;
		}
	}
	if (z == x)
	{
		break;
	}
	return ('\0');
}
