#include <stdio.h>
#include <libc6-dev-i386.h>

/**
 * main -  Print sixe of data types
 * Description: prints the size of various types of data
 * Return: 0
 */
int main(void)
{
printf("Size of a char: %u byte(s)\n", sizeof(char));
printf("Size of a int: %u byte(s)\n", sizeof(int));
printf("Size of a long int: %u byte(s)\n", sizeof(long));
printf("Size of a long long: %u byte(s)\n", sizeof(long long));
printf("Size of a float: %u byte(s)\n", sizeof(float));
return (0);
}
