#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an integer array.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to print.
 */
void print_array(int *a, int n)
{
	int i;

	/* Iterate through the array and print each element */
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}

	printf("\n");
}

