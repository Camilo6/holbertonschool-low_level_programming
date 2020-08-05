#include "holberton.h"

/**
 * main - Program that copies the content of a file into another file
 * @av: input arguments
 * @ac: quantity of arguments
 * Return: nothing
 */

int main(int ac, char *av[])
{

	int file, file1, c, c1;
	ssize_t r;
	char buffer[10048];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/** Abrimos */
	file = open(av[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file1 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file 1 %s\n", av[2]);
		exit(99);
	}
	/** Leemos y escribimos */
	r = read(file, buffer, 1024);
	write(file1, buffer, r);
	/** closing */
	c = close(file);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
	c1 = close(file1);
	if (c1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	return (0);
}
