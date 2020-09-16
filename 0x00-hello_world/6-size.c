#include <stdio.h>

/**
 * main - Print size of types
 * Direcription: Print size of differents types
 * Return: 0
 */
int main(void)
{
printf("Size of a char: %u byte(s)\n", sizeof(char));
printf("Size of an int: %u byte(s)\n", sizeof(int));
pritnf("Size of a long int: %u byte(s)\n", sizeof(long));
printf("Size of a long long int: %u byte(s)\n", sizeof(long long));
printf("Size of a float: %u byte(s)\n", sizeof(float));
return (0);
}
