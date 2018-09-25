#include "holberton.h"

/**
 * _puts - prints a string to stdout
 * @str: string
 * Return: Nothing
 */
void _puts(char *str)
{
	int count;
	char letter;

	for (count = 0; str[count] != '\0'; count++)
	{
		letter = str[count];
		_putchar(letter);
	}
	_putchar('\n');
}
