#include <stdio.h>

/**
 * main - Prints all combinations of two digits with a comma and space,
 *        followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0'); /* Print the first digit */
			putchar((digit2 % 10) + '0'); /* Print the second digit */

			if (digit1 == 8 && digit2 == 9)
				continue;

			putchar(','); /* Print a comma */
			putchar(' '); /* Print a space */
		}
	}

	putchar('\n'); /* Print a new line */

	return (0);
}

