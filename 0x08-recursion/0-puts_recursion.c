#include "main.h"

/**
 * _puts_recursion - Prints a string recursively.
 * @s: Pointer to the string to be printed.
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s); /* Print current character */
		_puts_recursion(s + 1); /* Recursively call with next character */
	}
	else
	{
		_putchar('\n'); /* Print new line when end of string is reached */
	}
}

