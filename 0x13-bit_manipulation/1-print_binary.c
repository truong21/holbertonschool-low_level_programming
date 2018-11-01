#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	unsigned long int size;

	size = sizeof(unsigned long int) * 8 - 1;
	for (i = 1 << size; i > 0; i = i >> 1)
	{
		if (n & i)
			break;
		else if (i == 1)
			_putchar('0');
	}
	for (; i > 0; i = i >> 1)
	{
		if (n & i)
		{
			_putchar('1');
		}
		else
			_putchar('0');
	}
}
