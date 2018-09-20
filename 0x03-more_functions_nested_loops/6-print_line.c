#include "holberton.h"

/**
 * print_line - prints a straight line in terminal
 * @n: number of _ to be added
 * Return: Nothing.
 */

void print_line(int n)
{
	int i;

	for (i = 0; n > 0 && i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
