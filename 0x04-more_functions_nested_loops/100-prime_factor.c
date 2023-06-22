#include <stdio.h>
#include "main.h"

/**
 * main - Prints the largest prime factor of 612852475143
 *
 * This function calculates and prints the largest prime factor of
 * the number 612852475143. It uses a loop to find the factors of
 * the number and divides the number by each factor until the number
 * becomes a prime factor.
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}

	printf("%lu\n", n);
	return (0);
}

