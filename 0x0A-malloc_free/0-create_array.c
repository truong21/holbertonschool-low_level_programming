#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with a
 * specific char
 * @size: size of array
 * @c: character to initialize array
 * Return: pointer to the array; NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size != 0)
		array = malloc(size * sizeof(c));
	else
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
