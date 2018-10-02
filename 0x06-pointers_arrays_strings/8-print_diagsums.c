#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 * @a: array
 * @size: size of
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2, *copy1, *copy2;

	sum1 = sum2 = 0;
	copy1 = copy2 = a;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += *copy1;
			copy1++;
		}
		for (j = 0; j < size; j++)
		{
			if (j == size - 1 - i)
				sum2 += *copy2;
			copy2++;
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
