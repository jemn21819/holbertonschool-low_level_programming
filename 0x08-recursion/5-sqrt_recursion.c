#include "holberton.h"

/**
 * _sqrt - find natural square .
 * @n: natural number integer
 * @i: variable
 * Return: square root of n.
 */

int _sqrt(int n, int i)
{
	if ((i * i) == n)
		return (i);
	else if ((i * i) > n)
		return (-1);
	return (_sqrt(n, i + 1));
}



/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: natural number integer
 * Return: square root of n.
 */

int _sqrt_recursion(int n)
{
	if ((n == 0) || (n == 1))
		return (n);
	else if (n < 0)
		return (-1);
	return (_sqrt(n, 1));
}
