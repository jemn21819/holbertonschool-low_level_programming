#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string
 * Return: 1 on success, -1 on failur
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
		wr = write(fd, text_content, len);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
