#include <stdio.h>

/**
 * main - prints sum of fibo numbers under 4,000,000
 * Return: 0
 */
int main(void)
{
	long x, y, next, sum;

	x = 1;
	y = 2;
	next = 3;
	sum = y;

	while (next < 4000000)
	{
		next = x + y;
		x = y;
		y = next;
		if ((y < 4000000) && (y % 2 == 0))
			sum += y;
	}
	printf("%lu\n", sum);
	return (0);
}
