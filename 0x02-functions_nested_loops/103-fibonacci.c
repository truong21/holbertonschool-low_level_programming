#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms of the fibonacci
 * sequence whose values do not exceed 4,000,000
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long prev, prev_prev, n, total;
	int i;

	prev_prev = 1;
	prev = 2;
	total = prev;
	for (i = 1; i < 31; i++)
	{
		n = prev + prev_prev;
		if (n % 2 == 0)
			total += n;
		prev_prev = prev;
		prev = n;
	}
	printf("%ld\n", total);
	return (0);
}
