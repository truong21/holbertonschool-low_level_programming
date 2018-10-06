#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: integers
 * Return: 0 (Success); 1 for Error
 */
int main(int argc, char *argv[])
{
	int count, sum, char_to_int;

	for (count = 1; count < argc; count++)
	{
		if (is_num(argv[count]))
			continue;
		else
			printf("Error\n");
		return (1);
	}
	sum = char_to_int = 0;
	for (count = 1; count < argc; count++)
	{
		char_to_int = atoi(argv[count]);
		sum += char_to_int;
	}
	printf("%d\n", sum);
	return (0);
}
/**
 * is_num - check if string is positive integers
 * @s: argument count
 * Return: 1 if Positive Integer; 0 otherwise
 */
int is_num(char *s)
{
	int count;

	if (s[0] == '-')
		return (0);
	for (count = 0; s[count] != '\0'; count++)
	{
		if (isdigit(s[count]))
			continue;
		else
			return (0);
	}
	return (1);
}
