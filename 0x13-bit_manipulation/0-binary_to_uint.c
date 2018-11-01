#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: converted number; 0 if b is NULL or there is a one or more chars
 * in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j, k;
	unsigned int uint;

	uint = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	k = i - 1;
	for (j = 0; j <= i; j++)
	{
		if (b[j] == '1')
			uint += _pow(2, k);
		k--;
	}
	return (uint);
}
/**
 * _pow - returns x raised to the power of y
 * @x: base
 * @y: exponent
 * Return: x raised to power of y
 */
unsigned int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow(x, y - 1));
}
