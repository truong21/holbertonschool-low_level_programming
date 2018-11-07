#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#define BUFFSIZE 1024

/**
 * main - copies the content of a file to another file
 * @ac: argument count
 * @av: list of arguments
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int file_from, file_to, rd, wrt, cl;
	char buffer[BUFFSIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 00600 | 00060 | 00004);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	rd = 1;
	while (rd)
	{
		rd = read(file_from, buffer, BUFFSIZE);
		if (rd == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (rd)
		{
			wrt = write(file_to, buffer, BUFFSIZE);
			if (wrt == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
		}
	}
	cl = close(file_from);
	if (cl == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	cl = close(file_to);
	if (cl == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
