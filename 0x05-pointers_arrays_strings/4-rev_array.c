#include "holberton.h"

/**
 * reverse_array - reverese the content of an array of integers
 * @a: array of int type
 * @n: number of elements of the array to be reversed
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < (n - 1); i++)
	{
		temp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = temp;
		n--;
	}
}
