#include "holberton.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: double pointer
 * @to: to copied
 */

void set_string(char **s, char *to)
{
	*s = to;
}