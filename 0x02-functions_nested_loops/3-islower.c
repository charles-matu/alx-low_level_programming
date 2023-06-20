#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: c is an ASCII character
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1); /* Return 1 if c is lowercase */
	}
	else
	{
		return (0); /* Return 0 if c is not lowercase */
	}
}

