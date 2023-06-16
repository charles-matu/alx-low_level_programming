#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0)); // Seed the random number generator

	n = rand() - RAND_MAX / 2; // Generate a random number between -RAND_MAX/2 and RAND_MAX/2

	if (n < 0) // Check if n is negative
	{
		printf("%d is negative\n", n); // Print the value of n along with the message for negative numbers
	}
	else if (n > 0) // Check if n is positive
	{
		printf("%d is positive\n", n); // Print the value of n along with the message for positive numbers
	}
	else // n is neither positive nor negative, so it must be zero
	{
		printf("%d is zero\n", n); // Print the value of n along with the message for zero
	}

	return 0;
}

