#include "holberton.h"

/**
 * cap_string - capitilizes all words of a string
 * @s: pointer to a string
 * Return: string in uppercase
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;
	for (i = 1; s[i] != '\0'; i++)
	{
		if ((s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
		s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
		s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
		s[i - 1] == '}') && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}

	return (s);
}
