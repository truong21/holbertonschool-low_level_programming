#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array of n size
 * @n: n elements
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", *(a + count));
		if (count < (n-1))
			printf(", ");
	}
	printf("\n");
}
