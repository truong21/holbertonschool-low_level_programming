#include "holberton.h"
#include <stdio.h>
#include <limits.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int count, flag;

	count = sizeof(unsigned long int) * 8 - 1;
	flag = 0;
	while (count >= 0)
	{
		temp = n >> count;
		if (temp & 1)
		{
			flag = 1;
			_putchar('1');
		}
		else
		{
			if (flag == 1)
				_putchar('0');
		}
		count--;
	}
	if (n == 0)
		_putchar('0');
}
