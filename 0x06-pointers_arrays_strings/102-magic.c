#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This program demonstrates a magic trick by modifying the value
 * at a specific memory location without directly using the variable.
 * The goal is to assign the value 98 to the element at index 5 of
 * the integer array 'a' by utilizing a pointer 'p'.
 *
 * Return: Always 0 (indicating success)
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
	 * - You are not allowed to use 'a'
	 * - You are not allowed to modify 'p'
	 * - Only one statement is allowed
	 * - You are not allowed to code anything else than this line of code
	 */
	*(p + 5) = 98;

	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);

	return (0);
}

