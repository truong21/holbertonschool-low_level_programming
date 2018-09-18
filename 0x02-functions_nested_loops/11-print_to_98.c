#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: number to start
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}
