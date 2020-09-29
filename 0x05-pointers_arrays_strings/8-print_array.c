#include "holberton.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: Array
 * @n: Number of elements
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", *(a + x));
		if (n - x != 1)
			printf(", ");
	}
	printf("\n");
}
