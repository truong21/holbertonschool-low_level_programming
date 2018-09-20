#include <stdio.h>

/**
 * main - prints numbers from 1 to 100 but for multiples of three and five
 * the term Fizz and Buzz, respectively, is printed instead
 * Return: (0) always success
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 101)
			printf(" ");
	}
	printf("\n");

	return (0);
}
