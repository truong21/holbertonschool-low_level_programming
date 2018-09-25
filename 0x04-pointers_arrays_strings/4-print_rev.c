#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int count;
	char letter;

	for (count = 0; s[count] != '\0'; count++)
	{
	}
	for (; count >= 0 ; count--)
	{
		letter = s[count];
		_putchar(letter);
	}
	_putchar('\n');
}
