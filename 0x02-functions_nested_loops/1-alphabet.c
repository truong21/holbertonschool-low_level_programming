#include "holberton.h"

/**
 * print_alphabet - function for printing lowercase alphabet
 *
 * Return: Nothing.
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
		_putchar(n);
	_putchar('\n');
}
