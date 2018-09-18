#include "holberton.h"

/**
 * add - print all natural numbers from n to 98
 * @n: number to start 
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n == 98)
		_putchar((n/10) + '0');
		_putchar((n%10) + '0');
	else if (n < 98)
	{
		_putchar((n/10) + '0');
		_putchar((-n%10) + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	else if (n > 98)
	{
		_putchar((n/100) + '0');
		_putchar(n + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n--;
	}
	_putchar('\n');
}
