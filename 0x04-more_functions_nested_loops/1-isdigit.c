#include "holberton.h"

/**
 * _isdigit - Check for a digit 0 - 9
 * @c: Integer
 * Return: 1 for a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
