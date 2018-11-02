#include "holberton.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to a 1 at a given index
 * @n: number
 * @index: index
 * Return: 1 if it worked; -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	*n |= 1 << index;
	return (1);
}
