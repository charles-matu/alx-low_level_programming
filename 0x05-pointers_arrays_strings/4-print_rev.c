#include "main.h"

/**
 * print_rev - Prints a string backwards.
 * @s: The string to be printed.
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0') /* Find the length of the string */
	{
		i++;
	}
	i--;

	while (i >= 0) /* Print the string in reverse order */
	{
		_putchar(s[i]); /* Print the current character */
		i--;
	}

	_putchar('\n'); /* Print a newline character to move to the next line */
}

