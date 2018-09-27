#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to be appended by source string
 * @src: string to be appended to the string at destination
 * @n: number of bytes
 * Return: pointer to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
	}
	for (j = 0; j < n && *(dest + j) != '\0'; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}

	return (dest);
}
