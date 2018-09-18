#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to check
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n % 10;
		_putchar(n + '0');
	}
	else
	{
		n = n % 10;
		_putchar(n + '0');
	}

	return (n);
}
