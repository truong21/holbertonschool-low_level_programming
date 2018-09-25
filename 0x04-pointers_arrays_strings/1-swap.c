#include "holberton.h"

/**
 * swap_int - swaps the vallues of two integers
 * @a: number to be swapped with b
 * @b: number to be swapped with a
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
