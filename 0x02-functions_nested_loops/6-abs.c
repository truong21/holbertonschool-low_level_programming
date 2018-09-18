#include "holberton.h"

/**
 * _abs - prints the absolute value of an integer
 * @n: number to check
 * Return: abs value
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	else
		n = n;

	return (n);
}
