#include <stdio.h>
#include "holberton.h"
/**
 * _isupper - Checks for uppercase
 * @c: Integer
 * Return: 1 if is upper, 0 otherwise
 */

int _isupper(int c)
{

	if (c >= 65 &&  c <= 90)
	{
		return (1);
	}
	return (0);
}
