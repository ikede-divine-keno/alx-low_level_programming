#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output.
 * @filename: The textfile to be read.
 * @letters: The number of letters it should read and print.
 * description: write a function thst reads and prints to stdout.
 * Return: The actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t input, output;

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	input = read(fd, buff, letters);
	if (input == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	output = write(STDOUT_FILENO, buff, input);
	if (output == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);

	return (output);
}
