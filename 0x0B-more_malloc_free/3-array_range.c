#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to the array; NULL otherwise
 */
int *array_range(int min, int max)
{
	int *array;
	int i, diff;

	if (min > max)
		return (NULL);
	diff = max - min;
	array = malloc(sizeof(int) * (diff + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= diff; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
