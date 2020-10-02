#include "holberton.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: string
 * Return: s
 */

char *leet(char *s)
{
	int x = 0;
	int y;

	char leet[10] = "aAeEoOtTlL";
	char num[10] = "4433007711";

	while (s[x] != '0')
	{
		x++;
	}
	for (y = 0; y < 10; y++)
	{
		if (s[x] == leet[y])
		{
			s[x] = num[y];
			break;
		}
	}
	return (s);
}
