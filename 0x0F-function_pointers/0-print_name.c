#include "function_pointers.h"

/**
 * print_name - Prints a name using a function.
 * @name: The name to print.
 * @f: Function to print the name.
 *
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL) /* Check for valid input */
		f(name); /* Call the function to print the name */
}

