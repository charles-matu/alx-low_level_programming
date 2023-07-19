#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - Get the function for an operator.
 * @s: The operator as a string.
 *
 * Return: Pointer to the corresponding function.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},       /* Addition operator */
		{"-", op_sub},       /* Subtraction operator */
		{"*", op_mul},       /* Multiplication operator */
		{"/", op_div},       /* Division operator */
		{"%", op_mod},       /* Modulus operator */
		{NULL, NULL}         /* End of operators array */
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);   /* Return corresponding function */

		i++;
	}

	return (NULL);   /* Operator not found, return NULL */
}

