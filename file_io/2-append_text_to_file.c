#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 success if NULL  -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_byte;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);
	
	if (fd == -1)
		return (-1);
	
	write_byte = write(fd, text_content, strlen(text_content));
	if (write_byte == -1)
		return (-1);

	close(fd);
	return (1);
}
