#include "main.h"

/**
 * read_textfile - Reads a tect file
 * and print to standard output
 * @filename: A string containing the name of the file.
 * @letters: the number of letters
 * it should read and print
 *
 * Return: The actual number of letters
 * it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, x, y;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY);
	x = read(fd, buffer, letters);
	y = write(STDOUT_FILENO, buffer, x);

	if (y == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (y);
}
