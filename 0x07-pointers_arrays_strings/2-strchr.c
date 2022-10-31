#include "main.h"

/**
 * _strchr -> string character
 * @s: string given
 * @c: another char
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *S++;
		if (a == c)
		{
			return (S - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
