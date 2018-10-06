#include "holberton.h"
#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: arguments to pass into main function
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc > 1)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	else
		printf("%s\n", argv[0]);
	return (0);
}
