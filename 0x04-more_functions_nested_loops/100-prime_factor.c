#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0
 */

int main(void)
{
	int x;
	long n = 612852475143;

	for (x = 2; x <= n; x++)
	{
		if (n % x == 0)
		{
			n = n / x;
			x--;
		}
	}
	printf("%d\n", x);
	return (0);
}
