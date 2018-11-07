#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success; -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int wrt, fd, cl;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	wrt = write(fd, text_content, _strlen(text_content));
	if (wrt == -1)
		return (-1);
	cl = close(fd);
	if (cl == -1)
		return (-1);
	return (1);
}
/**
 * _strlen - returns length of string
 * @s: character of string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}
	return (i);
}
