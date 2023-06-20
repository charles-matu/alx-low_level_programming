#include <stdio.h>

/**
 * natural_sum - Computes the sum of multiples of 3 or 5 below a given limit.
 * @limit: The upper limit (exclusive) for finding multiples.
 *
 * Return: The sum of the multiples of 3 or 5 below the given limit.
 */
int natural_sum(int limit)
{
	int sum = 0;
	int i;

	for (i = 0; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	return (sum);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	int limit = 1024;
	int sum = natural_sum(limit);

	printf("Sum of multiples of 3 or 5 below %d: %d\n", limit, sum);

	return (0);
}

