#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer
 * @array: array
 * @size: number of elements in the array array
 * @cmp: pointer to function to be used to compare values
 * Return: index of the first element; 0 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int (*ptr)(int);
	int i;

	ptr = cmp;
	if (size < 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (ptr(array[i]))
			return (i);
	}
	return (-1);
}
