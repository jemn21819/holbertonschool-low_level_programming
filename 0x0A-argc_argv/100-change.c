#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * changeCents - calcuate coins or cents of change
 * @n: change value
 * Return: numbers of cents
 */

int changeCents(int n)
{
	int cents = 0;

	while (n)
	{
		if (n >= 25)
			n -= 25;
		else if (n >= 10)
			n -= 10;
		else if (n >= 5)
			n -= 5;
		else if (n >= 2)
			n -= 2;
		else if (n >= 1)
			n -= 1;
		cents++;
	}
	return (cents);
}

/**
 * main - prints the minimum number of coins to make change
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 or 1 if error
 */

int main(int argc, char *argv[])
{
	int money;

	if (argc != 2)
	{
		return (printf("Error\n"), 1);
	}
	money = atoi(argv[1]);
	if (money < 0)
	{
		return (printf("0\n"), 0);
	}
	return (printf("%i\n", changeCents(money)), 0);
}
