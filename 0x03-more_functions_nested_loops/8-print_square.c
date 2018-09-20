#include "holberton.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: Nothing.
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			j = size;
			while (j--)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
