#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: Exit status.
 */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4) /* Check number of arguments */
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]); /* Get operator function */

	if (!oprt) /* Check if operator function is valid */
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3]))); /* Perform operation */
	return (0);
}

