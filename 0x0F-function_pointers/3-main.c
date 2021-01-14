#include "3-calc.h"

/**
 * main - program that performs simple operations
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 0 or error
 */

int main(int argc, char *argv[])
{
	register int num1, num2;

	if (argc != 4)
		printf("Error\n"), exit(98);
	if (get_op_func(argv[2]) == NULL)
		printf("Error\n"), exit(99);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
			&& atoi(argv[3]) == 0)
	{
		printf("Error\n"), exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(num1, num2));
	return (0);
}
