#include "holberton.h"
#define NULL 0
/**
 * _strstr - locates a substring
 * @haystack: string to be scanned
 * @needle: string to be located in haystack
 * Return: a pointer to the beginning of the located substring needle in the
 * string haystack; NULL if no such substring is found
 */
char *_strstr(char *haystack, char *needle)
{
	char *start_match, *i;

	while (*haystack != '\0' && *needle != '\0')
	{
		start_match = haystack;
		i = needle;
		while (*i == *haystack && *i != '\0'
			 && *haystack != '\0')
		{
			i++;
			haystack++;
		}
		if (*i == '\0')
			return (start_match);
		haystack = start_match + 1;
	}
	return (NULL);
}
