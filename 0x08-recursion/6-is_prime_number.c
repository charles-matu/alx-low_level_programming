#include "main.h"

/**
 * check_prime_number - Checks if a number is prime recursively.
 * @i: The current divisor to check.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int check_prime_number(int i, int n)
{
	if (n <= 1)
		return (0); /* Not prime */
	if (n <= i)
		return (1); /* Prime */
	if (n % i == 0)
		return (0); /* Not prime */
	return (check_prime_number(i + 1, n)); /* Recursively check next divisor */
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (check_prime_number(2, n));
}

