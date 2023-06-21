#include <stdio.h>

/**
 * positive_or_negative - prints if the given integer is positive or negative
 * @n: the integer to be evaluated
 *
 * Return: void
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}

/**
 * main - tests function that prints if an integer is positive or negative
 *
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0; /* Set the value of i to 0 */
	positive_or_negative(i); /* Call positive_or_negative function */

	return (0);
}

