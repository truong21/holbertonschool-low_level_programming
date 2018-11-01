#include "holberton.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: value of bit at index; -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;
	int bit;

	if (n > 4294967295)
		return (-1);
	temp = n >> index;
	if (temp & 1)
		bit = 1;
	else
		bit = 0;
	return (bit);
}
