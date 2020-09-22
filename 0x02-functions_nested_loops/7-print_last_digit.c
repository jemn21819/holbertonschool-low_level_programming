#include "holberton.h"

/**
 * print_last_digit - Print last digit of n
 * @n: Integer
 * Return: The lastNumber of n
 */

int print_last_digit(int n)
{

	int lastNumber;

	lastNumber = n % 10;

	_putchar(lastNumber + '0');
	return (lastNumber);
}
