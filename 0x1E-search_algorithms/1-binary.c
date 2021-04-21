#include "search_algos.h"

/**
 * binary_search - earches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array:  is a pointer to the first element of the array to search in size
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located if is not present -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r, m;

	l = 0;
	r = size -1;
	m = 0;

	if (!array)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i != r)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		m = (l + r) / 2;
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			l = m + 1;
		if (array[m] > value)
			r = m - 1;
	}
	return (-1);
}
