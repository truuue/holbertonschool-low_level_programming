#include "main.h"

/**
 * read_textfile - function that reads text file & prints to stdout
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd, red_byte;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	red_byte = read(fd, buffer, letters);
	close(fd);

	return (write(STDOUT_FILENO, buffer, red_byte));
}
