#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: name of the file to be created.
 * @text_content: a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, length, w;

	length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[length] != '\0')
		length++;

	w = write(fd, text_content, length);
	if (w == -1)
		return (-1);

	close(fd);

	return (1);
}
