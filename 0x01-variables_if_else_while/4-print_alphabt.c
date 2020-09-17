#include <stdio.h>

/**
 * main - Pritn alphabet in lowcase except q and e
 *
 * Return:  Always 0 (success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
			continue;
	putchar(x);
	}
	putchar('\n');

	return (0);
}
