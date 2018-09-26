#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed by src including the null byte
 * to the buffer pointed to by dest
 * @dest: pointer to buffer
 * @src: string to be copied
 * Return: string pointed by dest
 */
char *_strcpy(char *dest, char *src)
{
	int count;

	for (count = 0; src[count] != '\0'; count++)
	{
		dest[count] = src[count];
	}
	dest[count] = '\0';

	return (dest);
}
