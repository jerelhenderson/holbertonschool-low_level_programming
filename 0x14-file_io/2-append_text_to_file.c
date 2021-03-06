#include "holberton.h"


/**
 * append_text_to_file - creates file
 *
 * @filename: file name
 * @text_content: written string
 * Return: 1 on yay, -1 on nay
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int check;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	len = 0;

	if (text_content == NULL)
		write(fd, text_content, 0);
	else
		while (text_content[len] != '\0')
			len++;

	if (write(fd, text_content, len) == -1)
		return (-1);

	check = 1;

	check = close(fd);
	if (check == -1)
		return (check);
	return (1);
}
