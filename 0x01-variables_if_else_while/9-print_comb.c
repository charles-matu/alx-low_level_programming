#include <stdio.h>
#include <ctype.h>

/**
 * main - Prints all single digits with a comma and space, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit); /* Print the current digit */

		if (digit == '9')
			continue;

		putchar(','); /* Print a comma */
		putchar(' '); /* Print a space */
	}

	putchar('\n'); /* Print a new line */

	return (0);
}

