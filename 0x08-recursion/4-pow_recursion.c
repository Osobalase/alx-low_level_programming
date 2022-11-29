#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: the number to raised
 * @y: the power
 *
 * Return: the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int function = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	function *= _pow_recursion(x, y - 1);

	return (function);
}
