#include "holberton.h"

/**
 * *cap_string - function that capitalizes all words of a string
 * @s: String
 * Return: s
 */

char *cap_string(char *s)
{
	int x = 0;
	int y = 0;
	char a[] = {32, '\t', '\n', 43, 33, 34, 40, 41, 59, 63, 46, 123, 125};

	while (s[x] != '\0')
	{
		x++;
		if (s[x] >= 'a' && s[x] <= 'z')
		{
			if (x == 0)
				s[x] -= 32;
			for (y = 0; a[y]; y++)
			{
				if (a[y] == s[y - 1])
				{
					s[x] -= 32;
					break;
				}
			}
		}
	}
	return (s);
}
