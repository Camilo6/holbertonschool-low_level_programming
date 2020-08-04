#include "holberton.h"

/**
 * create_file - creates a file
 *
 * @filename: file to create
 * @text_content: content to write into file, leave null for none
 * Return: Returns -1 on failure, 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, n_write;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	while (text_content[i] != '\0')
		i++;
	n_write = write(fd, text_content, i);
	if (n_write == -1)
		return (-1);
	return (1);
}
