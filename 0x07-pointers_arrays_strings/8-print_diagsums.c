#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of a square matrix of integers
 * @a: matrix
 * @size: Matrix size
 */

void print_diagsums(int *a, int size)
{
	int x;
	int sum = 0;

	for (x = 0; x < (size * size); x += (size + 1))
		sum += a[x];
	printf("%d, ", sum);
	sum = 0;
	for (x = (size - 1); x < (size * size - 1); x += (size - 1))
		sum += a[x];
	printf("%d\n", sum);
}
