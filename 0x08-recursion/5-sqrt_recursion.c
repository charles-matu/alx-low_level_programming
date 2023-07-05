#include "main.h"

/**
 * check - Checks for the square root recursively.
 * @a: The current value to check.
 * @b: The number to find the square root of.
 *
 * Return: The square root if found, -1 otherwise.
 */
int check(int a, int b)
{
	if (a * a == b)
		return (a); /* Found square root */
	if (a * a > b)
		return (-1); /* Square root not found */
	return (check(a + 1, b)); /* Recursively check next value */
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root if found, -1 otherwise.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0); /* Square root of 0 is 0 */
	return (check(1, n));
}

