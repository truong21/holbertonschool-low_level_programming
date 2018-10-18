#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 * @array: array
 * @size: size of array
 * @action: pointer to function to be used
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	void (*ptr)(int);
	size_t i;

	ptr = action;
	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		ptr(array[i]);
}
