#include "variadic_functions.h"

/**
 * sum_them_all - Adds all the numbers passed as arguments.
 * @n: The number of parameters passed.
 *
 * Return: The sum of the numbers.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	va_start(ap, n); /* Initialize the argument pointer 'ap' with 'n' */

	if (n == 0) /* If no arguments are passed, return 0 */
		return (0);

	/* Sum all the integers passed as arguments using va_arg */
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap); /* Clean up the argument list */

	return (sum); /* Return the sum of the numbers */
}

