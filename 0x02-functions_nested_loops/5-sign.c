#include "holberton.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to check
 * Return: 1 and prints + if n is greather than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int result;

	if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	else
	{
		_putchar('+');
		result = 1;
	}

	return (result);
}
