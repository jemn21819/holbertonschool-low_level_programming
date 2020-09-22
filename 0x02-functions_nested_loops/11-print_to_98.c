#include "holberton.h"

/**
 * print_to_98 - Print natual numbers
 * @n: integer number
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	printf("98\n");
}
