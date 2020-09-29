#include "holberton.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: Array
 * @n: Numeber of elements
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", *(a + x));
		if (x > 0)
			print(", ");
	}
	printf("\n");
}
