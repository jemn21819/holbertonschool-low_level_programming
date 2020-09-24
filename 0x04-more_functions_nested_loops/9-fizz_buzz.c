#include <stdio.h>

/**
 * main - Print fizz num/3, buzz num/5, fizzbuzz num/ 3 & 5
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz ");
		else if (x % 3 == 0)
			printf("Fizz ");
		else if (x % 5 == 0)
			printf("Buzz ");
		else if (x == 100)
			printf("Buzz");
		else
			printf("%d ", x);
	}
	printf("\n");
	return (0);
}
