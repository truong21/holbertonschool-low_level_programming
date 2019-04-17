#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int left, int right);
int jump_search(int *array, size_t size, int value);
int linear_helper(int *array, size_t size, int value,
		  size_t start, size_t end);

#endif
