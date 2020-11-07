#include "holberton.h"
#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	int x, y;
	long a, b, next;

	a = 1;
	b = 2;
	y = 50;

	for (x = 0; x < y; x++)
	{
		if (x == 49)
		{
			printf("%lu", a);
		} else
		{
			printf("%lu, ", a);
			next = a + b;
			a = b;
			a = next;
		}
	}
	printf("\n");
	return (0);
}
