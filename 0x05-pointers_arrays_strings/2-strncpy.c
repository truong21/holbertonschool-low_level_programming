#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: string to be copied to from source string
 * @src: string to be copied to the string at destination
 * @n: number of bytes
 * Return: pointer to string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	while (i != n)
		dest[i++] = '\0';
	return (dest);
}
