#include "main.h"

/**
 * factorial - Calculates the factorial of a number recursively.
 * @n: The number to calculate the factorial for.
 *
 * Return: The factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1); /* Return -1 for negative input */
	if (n == 0)
		return (1); /* Return 1 for factorial of 0 */
	return (n * factorial(n - 1)); /* Recursively calculate factorial */
}

