#include "main.h"

/**
 * create_file - create a function that creates a file
 * @filename: name of the file to create
 * @text_content: string to write to file
 * Return: 1 succes if is NULL  -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_byte;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	write_byte = write(fd, text_content, strlen(text_content));

	if (write_byte == -1)
		return (-1);

	close(fd);
	return (1);
}
