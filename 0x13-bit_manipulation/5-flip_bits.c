#include "holberton.h"
#include <stdio.h>
#include <limits.h>
/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: number
 * @m: number
 * Return: Nothing
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp;
	int count;
	unsigned int sum;

	count = sizeof(unsigned long int) * 8 - 1;
	sum = 0;
	while (count >= 0)
	{
		temp = (n ^ m) >> count;
		if (temp & 1)
			sum++;
		count--;
	}
	return (sum);
}
