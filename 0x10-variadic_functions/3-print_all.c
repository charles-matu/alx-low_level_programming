#include "variadic_functions.h"

/**
 * print_all - Prints all arguments when specified.
 * @format: Specifies the operations.
 *
 * Return: Void.
 */
void print_all(const char *const format, ...)
{
	int flag = 0; /* Track valid format specifiers */
	char *str; /* Placeholder for string argument */
	va_list a_list; /* Variable argument list */

	va_start(a_list, format); /* Initialize argument pointer */

	while (*format)
	{
		switch (*format)
		{
			case 'c': /* Char format */
				printf("%c", va_arg(a_list, int)); /* Print char */
				break;
			case 'i': /* Int format */
				printf("%i", va_arg(a_list, int)); /* Print int */
				break;
			case 'f': /* Float format */
				printf("%f", va_arg(a_list, double)); /* Print float */
				break;
			case 's': /* String format */
				str = va_arg(a_list, char*); /* Get next string arg */
				if (str == NULL)
					str = "(nil)"; /* Print "(nil)" for NULL */
				printf("%s", str); /* Print string */
				break;
			default:
				flag = 1; /* Invalid format */
				break;
		}

		if (flag == 0 && *(format + 1) != '\0')
			printf(", "); /* Comma and space */

		flag = 0; /* Reset flag */
		format++; /* Move to next character */
	}

	printf("\n"); /* New line after all arguments */
	va_end(a_list); /* Clean up argument list */
}

