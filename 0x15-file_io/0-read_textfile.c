/*
 * File: 0-read_textfile.c
 * Auth: Dr Marcus.
 * Desc: This program reads a text file and prints it to the standard output.
 */
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w; /* Open, read, write variables */
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters); /* Allocate memory for buffer */
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY); /* Open the file */
	r = read(o, buffer, letters); /* Read from file into buffer */
	w = write(STDOUT_FILENO, buffer, r); /* Write buffer to standard output */

	/* Check for errors */
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer); /* Free allocated memory */
		return (0);
	}

	free(buffer); /* Free allocated memory */
	close(o); /* Close the file */

	return (w);
}

