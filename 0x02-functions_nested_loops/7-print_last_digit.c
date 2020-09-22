#include "holberton.h"

/**
 * print_last_digit - Print last digit of n
 * @n: Integer
 * Return: Always 0
 */

int print_last_digit(int n)
{

	int lastNumber;

	lastNumber = n % 10;

	_putchar("%i", n);
	_putchar('\n');
	return (0);
}
