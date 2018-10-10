#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: pointer to the duplicated string; NULL otherwise
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	dup_str = malloc((sizeof(char) * i) + 1);
	if (dup_str == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		dup_str[j] = str[j];

	return (dup_str);
}
