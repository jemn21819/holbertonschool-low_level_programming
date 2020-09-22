#include "holberton.h"

/**
 * print_to_98 - Print natual numbers
 * @n: integer number
 */

void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n; x <= 97; i++)
		{
			printf("%d, ", x);
		}
	}
	else
	{
		for (x = n; x >= 97; x--)
		{
			printf("%d, ", x);
		}
	}
	printf("98\n");
}
