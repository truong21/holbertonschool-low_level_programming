#include "holberton.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int rev;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
		_putchar(n + '0');
	rev = 0;
	while (n > 0)
	{
		rev = rev * 10 + (n % 10);
		n /= 10;
	}
	while (rev > 0)
	{
		_putchar((rev % 10) + '0');
		rev /= 10;
	}
}
