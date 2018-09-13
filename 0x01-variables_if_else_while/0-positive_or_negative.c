#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there*/

/**
 * main - assign random number to the variable n
 *        each time it is executed and print whether
 *        the number stored in variable is postive
 *        or negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
