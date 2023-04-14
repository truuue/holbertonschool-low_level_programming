#include "main.h"

/**
 * main - function that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, i;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	file_error(fd_from, fd_to, argv);

	while ((i = read(fd_from, buff, 1024)) > 0)
	{
		if ((write(fd_to, buff, i)) != i || fd_to < 0)
			file_error(0, -1, argv);
	}

	if (i < 0)
		file_error(-1, 0, argv);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}

/**
 * file_error - checks for file read/write errors and exits with error codes
 * @fd_from: file descriptor of file being read
 * @fd_to: file descriptor of file being written to
 * @argv: array of command line arguments
 */

void file_error(int fd_from, int fd_to, char *argv[])
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
