#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: pointer to the contents in the file.
 * @letters: Total number of files to be read and printed. *
 * Return: upon function failure, return 0.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f_open, f_read, f_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	f_open = open(filename, O_RDONLY);
	f_read = read(f_open, buffer, letters);
	f_write = write(STDOUT_FILENO, buffer, f_read);

	if (f_open == -1 || f_read == -1 || f_write == -1 || f_write != f_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(f_open);

	return (f_write);
}
