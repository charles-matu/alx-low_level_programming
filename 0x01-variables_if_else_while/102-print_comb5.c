#include <stdio.h>

/**
 * main - Prints all combinations of two two digits with a comma and space,
 *        followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 <= 98; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 99; digit2++)
		{
			putchar((digit1 / 10) + '0'); /* Print the tens digit of digit1 */
			putchar((digit1 % 10) + '0'); /* Print the ones digit of digit1 */
			putchar(32); /* Print a space */
			putchar((digit2 / 10) + '0'); /* Print the tens digit of digit2 */
			putchar((digit2 % 10) + '0'); /* Print the ones digit of digit2 */

			if (digit1 / 10 != 9 || digit1 % 10 != 8)
			{
				putchar(44); /* Print a comma */
				putchar(32); /* Print a space */
			}
		}
	}

	putchar(10); /* Print a new line */

	return (0);
}

