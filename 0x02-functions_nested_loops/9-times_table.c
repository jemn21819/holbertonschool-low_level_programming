#include "holberton.h"

/**
 * times_table - Print the 9 table
 */

void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (y == 0)
			{
				_putchar(48);
				continue;
			}
			c = x * y;
			_putchar(',');
			_putchar(' ');
			if (c >= 10)
			{
				_putchar(c / 10 + 48);
				_putchar(c % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(c + 48);
			}
		}
		_putchar('\n');
	}
}
