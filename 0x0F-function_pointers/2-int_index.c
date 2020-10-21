#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: data array
 * @size: elements in the array
 * @cmp: pointer functon to compare values
 * Return: i for integer or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
