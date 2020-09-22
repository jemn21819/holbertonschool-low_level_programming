#include "holberton.h"

/**
 * print_to_98 - Print natual numbers from n to 98
 * @n: starting number
 */

void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n; x < 98; i++)
		{
			printf("%d, ", x);
		}
	}
	else
	{
		for (x = n; x > 98; x--)
		{
			printf("%d, ", x);
		}
	}
	printf("98\n");
}
