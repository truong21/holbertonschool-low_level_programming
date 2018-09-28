#include "holberton.h"

/**
 * cap_string - capitilizes all words of a string
 * @s: pointer to a string
 * Return: string in uppercase
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i - 1] < 49 || s[i - 1] > 122) && s[i] >= 'a'
		&& s[i] <= 'z')
			s[i] -= 32;
	}

	return (s);
}
