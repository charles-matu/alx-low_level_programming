#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table
 */
void times_table(void)
{
	int row, column;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			int product = row * column;

			if (column != 0)
				_putchar(','); /* Print a comma */

			_putchar(' '); /* Print a space */

			if (product < 10)
				_putchar(' '); /* Print an extra space for single-digit numbers */
			else
				_putchar((product / 10) + '0'); /* Print the tens digit */

			_putchar((product % 10) + '0'); /* Print the ones digit */
		}

		_putchar('\n'); /* Print a new line after each row */
	}
}

