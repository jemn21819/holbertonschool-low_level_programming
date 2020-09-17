#include <stdio.h>
#include <unistd.h>

/**
 * main - Print exactly
 *
 * Return: Alwas 1 (Success)
 */
int main(void)
{
write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 63);
return (1);
}
