#include <stdio.h>
#include <ctype.h>

/**
 * main - Prints all single digits of base 10 followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit); /* Print the current digit */
	}

	putchar('\n'); /* Print a new line */

	return (0);
}

