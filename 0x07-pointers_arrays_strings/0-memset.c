#include "main.h"

/**
 * _memset - Fills the first @n bytes of the memory area pointed
 *           to by @s with the constant byte @b.
 *
 * @s: Pointer to the memory area.
 * @b: The constant byte to be filled with.
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

