#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_memcpy - function that copies memory area
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: size old pointer
 * @new_size: size new pointer
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2 = NULL;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		free(ptr);
		ptr2 = malloc(new_size);
		return (ptr2);
	}
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	ptr2 = malloc(new_size);
	_memcpy(ptr2, ptr, old_size);
	free(ptr);
	return (ptr2);
}

