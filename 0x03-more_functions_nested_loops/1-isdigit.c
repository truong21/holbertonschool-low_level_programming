#include "holberton.h"

/**
 * _isdigit - checks for digit
 * @c: number to be checked
 * Return: 1 if c is digit; 0 otherwise
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
