#include "holberton.h"


/**
 * read_textfile - read a text file, print to the POSIX
 *
 * @filename: file
 * @letters: number of letters
 * Return: read and printed letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t result;
	int fd;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	result = read(fd, buf, letters);
	if (result == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	if (write(STDOUT_FILENO, buf, result) == -1)
		return (0);

	free(buf);
	close(fd);
	return (result);
}
