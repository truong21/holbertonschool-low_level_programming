#include <stdio.h>

/**
 * main - compute the sums of all the multiples of 3 or 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int i, total;

	total = 0;
	for (i = 0; i < 1024; i++)
	{
		if (((i % 5) == 0) || (i % 3) == 0)
			total += i;
	}
	printf("%d\n", total);
	return (0);
}
