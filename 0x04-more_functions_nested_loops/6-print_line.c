#include "main.h"

/**
 * print_line - Prints a line composed of underscores
 * @n: Number of times to print the underscore
 *
 * This function prints a line composed of underscores, repeating
 * it 'n' number of times. It is followed by a newline character.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

