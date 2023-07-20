#include "variadic_functions.h"

/**
 * print_strings - Prints strings separated by a separator.
 * @separator: A string used to separate strings.
 * @n: Number of unnamed parameters.
 *
 * Return: Void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list ap;

	va_start(ap, n); /* Initialize the argument pointer 'ap' with 'n' */

	if (separator == NULL)
		separator = ""; /* If separator is NULL, set it as an empty string */

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*); /* Get the next string argument */
		if (str == NULL)
			str = "(nil)"; /* If the string is NULL, print "(nil)" */
		printf("%s", str); /* Print the string */
		if (i < n - 1)
			printf("%s", separator); /* Print the separator between strings */
	}
	printf("\n"); /* Print a new line after all strings */
	va_end(ap); /* Clean up the argument list */
}

