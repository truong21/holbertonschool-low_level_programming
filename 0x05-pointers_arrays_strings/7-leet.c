#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: pointer to a string
 * Return: pointer to converted string
 */
char *leet(char *s)
{
	int i, j;
	char alphabet[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (s[i] == alphabet[j])
			{
				s[i] = num[j];
				break;
			}
		}
	}

	return (s);
}
