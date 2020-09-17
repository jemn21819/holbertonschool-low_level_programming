#include <stdio.h>

/**
 * main - Print Numbers With comas
 *
 * Return:Always 0 (Seccess)
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '8'; x++)
	{
		putchar('%d, ', x);
	}
	for (x == '9')
	{
		putchar('%d$', x);
	}
	putchar('\n');
	return (0);
}
