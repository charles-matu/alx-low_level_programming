#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence terms
 *        not exceeding 4000000.
 *
 * Description: Computes and prints the sum of all even-valued Fibonacci
 *              numbers that do not exceed 4000000.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;
	float tot_sum;

	while (1)
	{
		fibsum = fib1 + fib2;  // Compute the next Fibonacci number
		if (fibsum > 4000000)
			break;  // Break the loop if the Fibonacci number exceeds the limit

		if ((fibsum % 2) == 0)
			tot_sum += fibsum;  // Add the even Fibonacci number to the total sum

		fib1 = fib2;  // Update the values for the next iteration
		fib2 = fibsum;
	}

	printf("%.0f\n", tot_sum);  // Print the total sum of even Fibonacci numbers

	return (0);
}

