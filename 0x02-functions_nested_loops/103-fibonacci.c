#include <stdio.h>

/**
 * main - Computes and prints the sum of even-valued Fibonacci sequence terms
 *        not exceeding 4000000.
 *
 * Description: This program calculates the sum of all even-valued Fibonacci
 *              numbers that do not exceed 4000000. It iteratively generates
 *              Fibonacci numbers and adds the even ones to the total sum. The
 *              final sum is then printed.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;
	float tot_sum = 0;

	while (1)
	{
		fibsum = fib1 + fib2;

		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			tot_sum += fibsum;

		fib1 = fib2;
		fib2 = fibsum;
	}

	printf("%.0f\n", tot_sum);

	return (0);
}

