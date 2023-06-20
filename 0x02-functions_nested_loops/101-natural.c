#include <stdio.h>

/**
 * fibonacci_sum_even - Computes the sum of even-valued terms
 *                      in the Fibonacci sequence up to a limit.
 * @limit: The limit up to which the Fibonacci sequence is computed.
 *
 * Return: The sum of even-valued terms in the Fibonacci sequence.
 */
unsigned long fibonacci_sum_even(unsigned long limit)
{
	unsigned long sum = 0;
	unsigned long prev = 0;
	unsigned long curr = 1;

	while (curr <= limit)
	{
		if (curr % 2 == 0)
			sum += curr;  // Add the even-valued term to the sum

		unsigned long next = prev + curr;  // Compute the next Fibonacci number
		prev = curr;
		curr = next;
	}

	return sum;
}

int main(void)
{
	unsigned long limit = 4000000;
	unsigned long sum = fibonacci_sum_even(limit);

	printf("Sum of even-valued terms in the Fibonacci sequence up to %lu: %lu\n", limit, sum);

	return 0;
}

