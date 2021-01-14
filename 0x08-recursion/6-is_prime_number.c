#include "holberton.h"

/**
 * _prime - function that returns integer is a prime number
 * @n: input number
 * @i: variable
 * Return: 1 if true 0 if false
 */

int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (_prime(n, i - 1));
}


/**
 * is_prime_number - retutns if a number is prime or not
 * @n: interger input number
 * Return: 1 if true 0 if false
 */

int is_prime_number(int n)
{
	if (n <= 2)
		return (0);
	return (_prime(n, n - 1));
}
