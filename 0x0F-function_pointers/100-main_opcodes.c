#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - Print opcodes of a program.
 * @a: Address of the main function.
 * @n: Number of bytes to print.
 *
 * Return: Void.
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]); /* Print opcode in hexadecimal */
		if (i < n - 1)
			printf(" "); /* Print space between opcodes */
	}
	printf("\n"); /* Print newline after opcodes */
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n"); /* Print error message */
		exit(1);
	}

	n = atoi(argv[1]); /* Convert argument to integer */

	if (n < 0)
	{
		printf("Error\n"); /* Print error message */
		exit(2);
	}

	print_opcodes((char *)&main, n); /* Print opcodes of main function */

	return (0);
}

