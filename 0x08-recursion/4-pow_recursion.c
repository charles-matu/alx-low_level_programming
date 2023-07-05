#include "main.h"

/**
 * _pow_recursion - Calculates the power of a number recursively.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1); /* Return -1 for negative exponent */
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1)); /* Recursively calculate power */
	}
	else
	{
		return (1); /* Return 1 for any number raised to the power of 0 */
	}
}

