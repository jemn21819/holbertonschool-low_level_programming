#include "holberton.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: string
 * Return: s
 */

char *rot13(char *s)
{
	int x = 0;
	int y = 0;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[x] != '\0')
	{
		x++;
		while (s[y] != '\0')
		{
			y++;
			if (s[x] == input[i])
			{
				s[x] = output[1];
				break;
			}
		}
	}
	return (s);
}
