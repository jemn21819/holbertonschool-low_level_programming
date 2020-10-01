#include "holberton.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: Array rev
 * @n: Number of elements
 */

void reverse_array(int *a, int n)
{
	int x;
	int y = n - 1;
	int temp;

	for (x = 0; x < y; x++)
	{
		temp = a[x];
		a[x] = a[y];
		a[y] = temp;
		y--;
	}
}
