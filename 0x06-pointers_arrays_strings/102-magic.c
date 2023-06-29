#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Modifies a given variable to a specific value
 * without directly referencing the variable or modifying a pointer.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/*
	 * Write your line of code here...
	 * Remember:
	 * - You are not allowed to use the variable "a".
	 * - You are not allowed to modify the variable "p".
	 * - Only one statement.
	 * - You are not allowed to code anything else than this line of code.
	 */
	*(p + 5) = 98;

	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
