#include "holberton.h"
#define NULL 0
/**
 * *_strchr - locates a character in a string
 * @s: the string for locating a character
 * @c: character to be found
 * Return: a pointer to first occurence of charater c in string C; otherwise
 * Null if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
