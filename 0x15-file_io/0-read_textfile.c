#include <stdio.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard out.
 * @filename: name of  file.
 * @letters: number of letters to read and print.
 * Return: quantity of letters read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f_read, f_write;
	int fd; /* file descriptor */
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0);

	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	f_read = read(fd, buffer, letters);
	close(fd);

	if (f_read < 0)
	{
		free(buffer);
		return (0);
	}

	f_write = write(STDOUT_FILENO, buffer, f_read);
	free(buffer);

	if (f_read != f_write)
		return (0);

	return (f_write);
}
