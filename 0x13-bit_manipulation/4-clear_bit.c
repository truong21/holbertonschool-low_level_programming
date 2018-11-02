#include "holberton.h"
#include <stdio.h>
/**
 * clear_bit - clears the value of a bit to a 1 at a given index
 * @n: pointer to number
 * @index: index
 * Return: 1 if it worked; -1 if error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	if (*n & (1 << index))
		*n ^= 1 << index;
	return (1);
}
