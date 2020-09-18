#include <stdio.h>

/**
 * main - prints all possible different combinations
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '8'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (y == '0')
				y = y + x + 1;
			putchar(x);
			putchar(y);
			if (x != '8' || y != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
