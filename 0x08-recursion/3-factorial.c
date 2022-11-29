#include "main.h"

/**
 * factorial -returns the factorial of a given number
 * @n: the number
 *
 * Return: an integer
 */
int factorial(int n)
{
	int function = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	function *= factorial(n - 1);

	return (function);
}
