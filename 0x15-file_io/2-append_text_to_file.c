#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the NULL terminated string
 * to add at the end of the file
 *
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, x, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for ( ; text_content[length];)
			length++;
	}

	fd = open(filename, O_RDWR | O_APPEND);
	x = write(fd, text_content, length);

	if (fd == -1 || x == -1)
		return (-1);

	close(fd);

	return (1);
}
