#include "holberton.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed into main
 * @argc: argument count
 * @argv: arguments to pass into main function
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc > 1)
	{
		for (count = 1; argv[count] != '\0'; count++)
		{
		}
		printf("%d\n", count - 1);
	}
	else
		printf("0\n");
	return (0);
}
