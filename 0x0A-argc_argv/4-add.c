#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: Argument counter
 * @argv: arguemnt vector
 * Return: 1 if error or 0 if result
 */

int main(int argc, char *argv[])
{
	int x, y;
	int res = 0;

	if (argc > 1)
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y]; y++)
				if (argv[x][y] < '0' || argv[x][y] > '9')
					return (printf("Error\n"), 1);
			res += atoi(argv[x]);
		}
	printf("%i\n", res);
	return (0);
}
