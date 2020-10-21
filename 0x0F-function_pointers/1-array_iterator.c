#include "function_pointers.h"

/**
 * array_iterator - given as a parameter on each element of an array
 * @array: data array
 * @size: array size
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && action)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}
