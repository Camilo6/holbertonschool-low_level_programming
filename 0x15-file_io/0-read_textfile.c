#include "holberton.h"

/**
 * read_textfile - function to read text file and print to the POSIX std output
 * @filename: char pointer to name of file to read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * return 0 if file can not be opened or read, if filename is NULL, or if write
 * fails or does not write the expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t total;
	ssize_t error;
	char *buffer;

	/* check errors edge cases */
	buffer = malloc(sizeof(*buffer) * letters);
	if (filename == NULL)
		return (0);
	if (buffer == NULL)
		return (0);
	/* read */
	fd = open(filename, O_RDONLY);

	if (fd == -1)	/* return 0 if file can't be opened or read */
	{
		free(buffer);
		return (0);
	}
	total = read(fd, buffer, letters); /* read */
	if (total == -1)
	{
		free(buffer);
		return (0);
	}
	if (total > 0)
		error = write(STDOUT_FILENO, buffer, total); /* write*/
	if (error < total)
	{
		free(buffer);
		return (0);
	}
	error = close(fd);
	if (error == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (total);
}
