#include "holberton.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet ten times
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int i, n;

	i = 0;
	while (i < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
		_putchar('\n');
		i++;
	}
}
