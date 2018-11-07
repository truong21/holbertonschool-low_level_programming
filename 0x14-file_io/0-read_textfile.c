#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - reads a test file and prints it to the POSIX standard output
 * @filename: file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it should read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int  rd, wrt, fd, cl;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	rd = read(fd, buffer, letters);
	if (rd < 0)
		return (0);
	if ((size_t)rd < letters)
		letters = rd;
	wrt = write(1, buffer, letters);
	if (wrt == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	cl = close(fd);
	if (cl == -1)
		return (0);
	return (wrt);
}
