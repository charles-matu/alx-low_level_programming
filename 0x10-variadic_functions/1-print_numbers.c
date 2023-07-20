#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line.
 * @n: Number of parameters.
 * @separator: Separator between two numbers.
 *
 * Return: Void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n); /* Initialize the argument pointer 'ap' with 'n' */

	if (separator == NULL)
		separator = ""; /* If separator is NULL, set it as an empty string */

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int)); /* Print the next integer argument */
		if (i < n - 1)
			printf("%s", separator); /* Print the separator between numbers */
	}
	printf("\n"); /* Print a new line after all numbers */
	va_end(ap); /* Clean up the argument list */
}

