#include <stdio.h>

/**
 * main - Pritn alphabet in lowcase
 *
 * Return:  Always 0 (success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}

	putchart('\n');

	return (0);
}
