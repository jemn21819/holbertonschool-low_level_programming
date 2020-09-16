#include <stdio.h>

/**
 * main - Print the size of data
 * Description: Print size of the data requested
 * Return: 0
 */
int main(void)
{
printf("Size of a char: %i byte(s)\n", sizeof(char));
printf("Size of a int: %i byte(s)\n", sizeof(int));
printf("Size of a long int: %i byte(s)\n", sizeof(long));
printf("Size of a long long: %i byte(s)\n", sizeof(long long));
printf("Size of a float: %i byte(s)\n", sizeof(float));
return (0);
}
