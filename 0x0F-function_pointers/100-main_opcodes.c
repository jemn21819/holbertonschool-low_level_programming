#include "function_pointers.h"

/**
 * main - prints the opcodes of its own main function.
 * @argc: counter
 * @argv: vector
 * Return: 0 or error
 */

int main(int argc, char *argv[])
{
	int i, num;
	char *ptr = (char *)main;

	if (argc != 2)
		printf("Error\n"), exit(1);
	num = atoi(argv[1]);
	if (num < 0)
		printf("Error\n"), exit(2);
	for (i = 0; i < num - 1; i++)
		printf("%02hhx\n", ptr[i]);
	printf("%02hhx\n", ptr[i]);
	return (0);
}
