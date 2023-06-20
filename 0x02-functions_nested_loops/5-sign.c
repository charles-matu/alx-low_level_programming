#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: n is an integer
 *
 * Return: 1 if n is positive, 0 if n is zero, -1 if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+'); /* Print '+' for positive numbers */
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-'); /* Print '-' for negative numbers */
		return (-1);
	}
	else
	{
		_putchar('0'); /* Print '0' for zero */
		return (0);
	}
}

