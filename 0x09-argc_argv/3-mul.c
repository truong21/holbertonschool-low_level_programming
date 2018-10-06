#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the multiplication of two numbers
 * @argc: argument count
 * @argv: integers
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
