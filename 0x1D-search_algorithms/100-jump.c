#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of integers
 * using Jump Search algorithm
 * @array: pointer to the array of int
 * @size: size of array
 * @value: target int value
 * Return: index of the value in the array; -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = 0;
	size_t i = 0;

	if (!array)
		return (-1);
	jump = sqrt(size);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value <= array[i + jump] || i == size - 1)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
				i, i + jump);
			return (linear_helper(array, size, value, i, i + jump));
		}
		i += jump;
	}
	return (-1);
}
/**
 * linear_helper - searches for a value in an array of integers
 * using Linear Search algorithm
 * @array: pointer to the array of int
 * @size: size of array
 * @value: target int value
 * @start: starting index of block to search
 * @end: ending index of block to search
 * Return: index of the value in the array; -1 otherwise
 */
int linear_helper(int *array, size_t size, int value, size_t start, size_t end)
{
	if (!array)
		return (-1);
	while (start <= end && start < size)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
	}
	return (-1);
}
