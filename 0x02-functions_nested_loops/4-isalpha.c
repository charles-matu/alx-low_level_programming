#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: c is an ASCII character
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1); /* Return 1 if c is a lowercase letter */
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1); /* Return 1 if c is an uppercase letter */
	}
	else
	{
		return (0); /* Return 0 if c is not a letter */
	}
}

