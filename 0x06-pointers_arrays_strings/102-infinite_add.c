#include "holberton.h"

/**
 * rev_string -  revers string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	char temp = 0;
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
		;
	x--;
	for (y = 0; y < x; y++)
	{
		temp = s[y];
		s[y] = s[x];
		s[x] = temp;
		x--;
	}
}


/**
 * str_count - size of string
 * @s: string
 * Return: size
 */

int str_count(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}


/**
 * infinite_add - function that adds two numbers.
 * @n1: string
 * @n2: string
 * @r: Store buffer
 * @size_r: buffer sizes
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a;
	int b;
	int x;
	int add = 0;
	int res;

	a = str_count(n1);
	b = str_count(n2);
	if (n1 >= size_r)
		return (0);
	a--;
	b--;
	for (x = 0; x < size_r; x++)
	{
		if (a >= 0 && b >= 0)
			res = (n1[a] - 48) + (n2[b] - 48) + add;
		else if (a > b)
			res = (n1[a] - 48) + add;
		else if (b > a)
			res = (n2[b] - 48) + add;
		else
			break;
		if ((a >= 0 && b >= 0) || a > b)
			a--;
		if ((a >= 0 && b >= 0) || a > b)
			b--;
		r[x] =  res % 10 + 48;
		add = res / 10;
		if (add && x + 2 == size_r)
			return (0);
	}
	if (add)
	{
		r[x] = add + 48;
		r[x + 1] = '\0';
	}
	else
		r[x] = '\0';
	rev_string(r);
	return (r);
}
