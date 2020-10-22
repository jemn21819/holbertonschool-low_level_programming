#include "3-calc.h"

/**
 * main - program that performs simple operations
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 0 or error
 */

int main(int argc, char *argv[])
{
	int num1, num2, i;
	int (*fptr)(int, int);

	if (argc != 4)
		printf("Error\n"), exit(98);
	fptr = get_op_func(argv[2]);
	if (!fptr)
		printf("Error\n"), exit(99);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	i = fptr(num1, num2);
	printf("%i\n", i);
	return (0);
}
