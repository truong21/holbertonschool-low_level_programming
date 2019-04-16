#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * using Binary Search algorithm
 * @array: pointer to the array of int
 * @size: size of array
 * @value: target int value
 * Return: index of the value in the array; -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid = 0;

	if (!array)
		return (-1);
	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Mid: %d\n", mid);
		printf("Searching in array: ");
		print_array(array, left, right);
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}

/**
 * print_array - print the array being searched
 * @array: pointer to array of ints
 * @left: starting point of array
 * @right: end point of array
 * Return: Nothing
 */
void print_array(int *array, int left, int right)
{
	int i;

	i = left;
	while (i <= right)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
		else
			printf("\n");
		i++;
	}
}
