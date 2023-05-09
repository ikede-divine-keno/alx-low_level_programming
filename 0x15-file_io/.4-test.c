#include "main.h"

/**
* main - program that copies the content of a file to another file
* @argc: num argument
* @argv: string argument
* Return: 0
*/

int main(int argc, char *argv[])
{
	int fd_file_from, fd_file_to;
	int original = 1024, copy = 0;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_file_from = open(argv[1], O_RDONLY);
	if (fd_file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_file_from), exit(99);
	}
	while (original == 1024)
	{
		original = read(fd_file_from, buff, 1024);
		if (original == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		copy = write(fd_file_to, buff, original);
		if (copy < original)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(fd_file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_file_from);
		exit(100);
	}

	if (close(fd_file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_file_to), exit(100);

	return (0);
}
