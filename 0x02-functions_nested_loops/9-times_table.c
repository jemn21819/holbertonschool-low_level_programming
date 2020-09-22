#include "holberton.h"
/**
 * times_table - Print the 9 table
 *
 * Return: nothing
 */
void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (y == 0)
			{
				_putchar('0');
				continue;
			}
			c + x * y;
			_putchar(',');
			_putchar(' ');
			if (c >= 10)
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}
