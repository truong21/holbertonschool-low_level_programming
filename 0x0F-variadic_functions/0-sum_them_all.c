#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - calculate sum of all its parameters
 * @n: number of parameters
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	int res;
	unsigned int i;

	res = 0;
	va_start(sum, n);
	for (i = 0; i < n; i++)
		res += va_arg(sum, int);
	va_end(sum);
	return (res);
}
