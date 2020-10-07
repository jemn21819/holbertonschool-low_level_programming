#include "holberton.h"

/**
 * _strlen_recursion - unction that returns the length of a string.
 * @s: string
 * Return: string length
 */


int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}


/**
 * _palin - palindrome funcion
 * @str: string
 * @s: index
 * @e: index
 * Return: 1 for true 0 for false
 */

int _palin(char *str, int s, int e)
{
	if (s == e)
		return (1);
	if (str[s] != str[e])
		return (0);
	if (s < e + 1)
		return (_palin(str, s + 1, e - 1));
	return (1);
}


/**
 * is_palindrome - function that returns 1 if string is a palindrome and 0 not
 * @s: string
 * Return: 1 if true 0 if false
 */

int is_palindrome(char *s)
{
	int strLen = _strlen_recursion(s) - 1;

	return (_palin(s, 0 + strLen));
}
