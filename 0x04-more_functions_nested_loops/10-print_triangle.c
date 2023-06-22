#include "main.h"

/**
 * print_triangle - Prints a triangle of a given size
 * @size: Size of the triangle
 *
 * This function prints a triangle using the '#' character. The triangle
 * has 'size' number of rows, where each row contains 'size' number of
 * '#' characters. If 'size' is less than or equal to 0, the function
 * prints a newline character.
 */
void print_triangle(int size)
{
	int row, hashes, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

