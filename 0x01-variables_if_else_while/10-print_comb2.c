#include <stdio.h>

/**
 * main - Print from 00 to 99
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = '00'; x <= '99'; x++)
	{
		putchar(x);
		if (x != '99')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
