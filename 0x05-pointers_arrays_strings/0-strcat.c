#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be appended by source string
 * @src: string to be appended to the string at destination
 * Return: pointer to string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	i++;
	dest[i] = '\0';
	return (dest);
}
