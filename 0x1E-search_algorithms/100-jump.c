#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located or -1 if is not present
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, j, mem;

	mem = (size_t)sqrt(size);
	if (!array || size == 0)
		return (-1);
	for (i = 0; i < size; i += mem)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	i -= (i > 0 ? mem : 0);
	printf("Value found between indexes [%lu] and [%lu]\n",
			i, i + mem);
	for (j = i; j <= min(size - 1, i + mem) && array[j] <= value; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
