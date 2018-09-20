#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: Nothing.
 */

void print_triangle(int size)
{
	int i, j, k, l;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			j = i;
			k = size - i;
			l = k;
			while (l--)
				_putchar(' ');
			while (j--)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
