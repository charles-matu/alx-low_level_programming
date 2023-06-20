#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 * @n: starting integer
 *
 * Description: prints all natural numbers from n to 98
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n); /* Print the current number followed by a comma and space */
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n); /* Print the current number followed by a comma and space */
			n--;
		}
	}
	printf("98\n"); /* Print 98 followed by a new line character */
}

