#include <stdio.h>

/**
 * main - compute the sums of all the multiples of 3 or 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int mult_3, mult_5, total;
	int i;

	mult_3 = mult_5 = total = 0;
	for (i = 0;  mult_3 < 1023; i++)
	{
		mult_3 = i * 3;
		total += mult_3;
	}
	for (i = 0;  mult_5 < 1020; i++)
	{
		mult_5 = i * 5;
		total += mult_5;
	}
	printf("%d\n", total);
	return (0);
}
