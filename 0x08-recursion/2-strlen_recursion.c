#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: string to be measured
 * Return: length of string.
 */
int_strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len +=_strlen_recursion(s + 1);
	}

	return (len);
}
