#include "main.h"

/**
 * _puts - Prints a string.
 * @str: The string to be printed.
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0') /* Loop until null character is encountered */
	{
		_putchar(str[i]); /* Print the current character */
		i++; /* Move to the next character */
	}
	_putchar('\n'); /* Print a newline character to move to the next line */
}

