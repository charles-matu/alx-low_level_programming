#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Description: Computes and prints the first 50 Fibonacci numbers,
 *              starting with 1 and 2, separated by a comma followed
 *              by a space.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;  /* Compute the next Fibonacci number */
		printf("%lu", sum);  /* Print the Fibonacci number */

		fib1 = fib2;  /* Update the values for the next iteration */
		fib2 = sum;

		if (count == 49)
			printf("\n");  /* Print a newline after the last number */
		else
			printf(", ");  /* Print a comma and space between numbers */
	}

	return (0);
}

