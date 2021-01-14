#include "holberton.h"

/**
 * _atoi - convert a string to an integer.
 * @s: String
 * Return: integer
 */

int _atoi(char *s)
{
	int x = 0;
	int sign = 1;
	int res = 0;

	while ((*(s + x) < '0' || *(s + x) > '9') && (*(s + x) != '\0'))
	{
		if (*(s + x) == '-')
		{
			sign = sign * -1;
		}
		x++;
	}
	while (*(s + x) != '\0' && *(s + x) >= '0' && *(s + x) <= '9')
	{
		res = res * 10 - (*(s + x) - '0');
		x++;
	}
	sign = sign * -1;
	return (res * sign);
}
