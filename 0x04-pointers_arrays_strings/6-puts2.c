#include "holberton.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @str: string
 * Return: Nothing
 */
void puts2(char *str)
{
	int count;
	char letter;

	for (count = 0; str[count] != 0; count++)
	{
		if (count % 2 != 0)
			continue;
		else
		{
			letter = str[count];
			_putchar(letter);
		}
	}
	_putchar('\n');
}
