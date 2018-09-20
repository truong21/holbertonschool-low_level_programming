#include "holberton.h"

/**
 * print_diagonal - prints a straight line in terminal
 * @n: number of \ to be added
 * Return: Nothing.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			j = i;
			while (j--)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
