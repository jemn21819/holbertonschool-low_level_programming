#include <stdio.h>

/**
 * main - Print Numbers With comas
 *
 * Return:Always 0 (Seccess)
 */

int main(void)
{
	int x;

	while (x <= '9')
	{
		putchar(x);
		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
