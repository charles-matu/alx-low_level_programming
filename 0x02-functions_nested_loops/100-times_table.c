#include "main.h"

/**
 * print_times_table - prints the times table
 * @n: integer for which the times table will be printed
 *
 * Description: prints the times table up to a given number 'n'
 *              The number 'n' should be between 0 and 14.
 *              If 'n' is outside this range, no table is printed.
 */
void print_times_table(int n)
{
	int row, column, product;

	if (n >= 0 && n < 15) /* Check if 'n' is within the valid range of 0 to 14 */
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = row * column;

				if (column == 0)
					_putchar('0');
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product % 10 + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
				else if (product > 99 && product < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
			}
			_putchar('\n');
			/* Charles, please note that each row of the times table is followed by a new line character */
		}
	}
	/* Charles, if 'n' is outside the valid range, no table is printed */
	/* The function will simply return without any output */
}

