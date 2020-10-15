#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument counter
 * @av: argument variable
 * Return: Null or pointer
 */

char *argstostr(int ac, char **av)
{
	int x, c;
	int res = 0;
	char *p = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (c = 0; av[x][c]; c++)
			;
		res += c + 1;
	}
	p = malloc(sizeof(char) * res + 1);
	if (!p)
		return (NULL);
	res = 0;
	for (x = 0; x < ac; x++)
	{
		for (c = 0; av[x][c]; c++)
		{
			p[res] = av[x][c];
			res++;
		}
		p[res] = '\n';
		res++;
	}
	p[res] = '\0';
	return (p);
}

