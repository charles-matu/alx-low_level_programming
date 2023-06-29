#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Indirectly modifies an array  without directly.
 *
 * Return: 0
 */
int main(void)
{
	int n, a[5], *p;

	a[2] = 1024;
	p = &n;
	*(p + 5) = 98; /* Indirectly modifies a[2] to 98 */
	printf("a[2] = %d\n", a[2]);
	return (0);
}

