#include "holberton.h"
int prime_checker(int n, int i);
/**
 * is_prime_number - analyze if input number is prime number
 * @n: number to be analyzed
 * Return: 1 if prime number; otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (prime_checker(n, 2));
}
/**
 * prime_checker - analyze if prime number is divisible by i
 * @n: number to be analyzed
 * @i: number to divide n by
 * Return: 1 if n is divisible only by equal value; 0 otherwise
 */
int prime_checker(int n, int i)
{
	if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (prime_checker(n, i + 1));
}
