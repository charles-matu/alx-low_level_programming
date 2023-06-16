#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the last digit of a random number
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0)); /* Seed the random number generator */
	n = rand() - RAND_MAX / 2; /* Generate a random number between -RAND_MAX/2 and RAND_MAX/2 */
	last = n % 10; /* Get the last digit of n using modulo operator */

	if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last); /* Print the last digit and its properties */
	}
	else
	{
		if (last > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, last); /* Print the last digit and its properties */
		}
		else if (last < 6)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last); /* Print the last digit and its properties */
		}
	}

	return (0);
}

