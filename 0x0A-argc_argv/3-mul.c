#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: argument counting
 * @argv: argument vector
 * Return: 0 or error
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
