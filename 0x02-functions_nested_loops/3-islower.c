#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c: - number to check
 * Return: 1 if c is lowercase; 0 if otherwise
 */
int _islower(int c)
{
	int result;

	if ((c >= 'a') && (c <= 'z'))
		result = 1;
	else
		result = 0;

	return (result);
}
