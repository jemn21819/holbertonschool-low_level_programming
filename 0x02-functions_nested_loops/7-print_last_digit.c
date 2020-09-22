#include "holberton.h"

/**
 * print_last_digit - Print last digit of n
 * @n: Integer
 * Return: The lastNumber of n
 */

int print_last_digit(int n)
{

	n = n % 10;

	_putchar(n + '0');
	return (n);
}
