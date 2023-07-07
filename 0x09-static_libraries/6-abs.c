#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: n is an integer
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n); /* Return n if n is positive */
	}
	else if (n < 0)
	{
		return (-n); /* Return -n if n is negative */
	}
	else
	{
		return (n); /* Return n if n is zero */
	}
}

