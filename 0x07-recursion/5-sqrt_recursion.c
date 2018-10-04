#include "holberton.h"
int square_rt(int n, int base);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate square root from
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (n);
	if (n <= 0)
		return (-1);
	return (square_rt(n, 1));
}

/**
 * square_rt - check if based squared is equal to n
 * @n: the value to match base squared
 * @base: number to multiply by itself
 * Return: square root value; -1 for no match
 */
int square_rt(int n, int base)
{
	if (n == base)
		return (-1);
	if (n == base * base)
		return (base);
	else
		return (square_rt(n, base + 1));
}
