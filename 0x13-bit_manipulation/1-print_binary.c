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

	for (i = 1 << 30; i > 0; i = i >> 1)
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
