#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: separator string
 * @n: arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator && i != n - 1)
			printf("%i%s", va_arg(args, int), separator);
		else
			printf("%i", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
