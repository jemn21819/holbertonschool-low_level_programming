#include "holberton.h"

/**
 * _isalpha - return 1 or 0
 * @c: to be tested
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	return ((c >= 65 && c <+90) || (c >= 97 && c <= 122));
}
