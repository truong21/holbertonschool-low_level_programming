#include "holberton.h"
#define NULL 0
/**
 * _strpbrk - searches a string for any of set of bytes
 * @s: the string to be scanned
 * @accept: the set of bytes in string to be located in s
 * Return: a pointer to the byte in s that matches one fo the bytes in accept;
 * NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	if (s[i] == accept[j])
		return (s);
	else
		return (NULL);
}
