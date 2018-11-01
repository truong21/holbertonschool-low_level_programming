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
	k = 0;
	for (j = i - 1; j >= 0; j--)
	{
		if (b[j] == '1')
			uint += 1 << k;
		k++;
	}
	return (uint);
}
