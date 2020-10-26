#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: ist of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str, *space = "";
	va_list args;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", space, va_arg(args, int));
					break;
				case 'i':
					printf("%s%i", space, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", space, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", space, str);
					break;
				default:
					i++;
					continue;
			}
			space = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
