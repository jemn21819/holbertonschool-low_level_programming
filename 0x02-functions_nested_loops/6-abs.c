B#include "holberton.h"

/**
 * _abs - Return the absolute value
 * @n: Integer
 * Return: returns n for positive, 0 for zero, -n for negative
 */

int _abs(int n)
{
	return (n < 0 ? -n : n);
}
