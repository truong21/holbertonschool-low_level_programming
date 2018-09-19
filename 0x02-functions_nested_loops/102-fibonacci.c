#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers starting with 1 and 2
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long prev, prev_prev, n;
	int i;

	prev_prev = 1;
	prev = 2;
	printf("1, 2, ");
	for (i = 1; i < 49; i++)
	{
		n = prev + prev_prev;
		printf("%ld", n);
		if (i != 48)
			printf(", ");
		prev_prev = prev;
		prev = n;
	}
	printf("\n");
	return (0);
}
