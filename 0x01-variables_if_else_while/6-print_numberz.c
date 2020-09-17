#include <stdio.h>

/**
 * main - Write num with base 10 wih putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar('%d' + x);
	}
	putchar('\n');

	return (0);
}
