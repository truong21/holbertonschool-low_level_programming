#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: alphabet to check
 * Return: 1 if c is letter; 0 if otherwise
 */
int _isalpha(int c)
{
	int result;

	if ((c >= 'a') && (c <= 'z'))
		result = 1;
	else if ((c >= 'A') && (c <= 'Z'))
		result = 1;
	else
		result = 0;

	return (result);
}
