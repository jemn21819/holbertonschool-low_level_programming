#include "holberton.h"

/**
 * read_textfile - reads a file and prints it to the POSIX standard output.
 * @filename: pinter file
 * @letters: bytes needed
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, re, wr;
	char *buf;

	if (!filename)
		return (0);
	buf = malloc(letters + 1);
	if (!buf)
	{
		free(buf);
		return (0);
	}
	fd = open(filename, O_RDONLY, 600);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	re = read(fd, buf, letters);
	if (re == -1)
	{
		free(buf);
		return (0);
	}
	buf[letters] = '\0';
	wr = write(STDOUT_FILENO, buf, re);
	if (wr == -1)
	{
		free(buf);
		return (0);
	}
	close(fd);
	return (wr);
}
