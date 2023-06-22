#include "main.h"

/**
 * print_square - Prints a square of a given size
 * @size: Size of the square
 *
 * This function prints a square using the '#' character, with each side
 * of the square having a length equal to the input 'size'. If 'size' is
 * less than or equal to 0, the function prints a newline character.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

