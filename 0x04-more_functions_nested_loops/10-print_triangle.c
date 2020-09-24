#include "holberton.h"

/**
 * print_triangle - prints a triangle Use the character #
 * @size: is the size of the triangle
 */

void print_triangle(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				if (y < size - x - 1)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
