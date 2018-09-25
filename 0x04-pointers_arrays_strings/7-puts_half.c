#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int count, n;
	char letter;

	for (count = 0; str[count] != 0; count++)
	{
	}
	n = (count - 1) / 2;
	for (count = n + 1; str[count] != 0; count++)
	{
		letter = str[count];
		_putchar(letter);
	}
	_putchar('\n');
}
