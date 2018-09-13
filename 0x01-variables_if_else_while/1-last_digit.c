#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there*/

/**
 * main - assign random number to the variable n
 *        each time it is executed and print the last
 *        digit of the number stored in the variable
 * Return: 0
 */
int main(void)
{
	int n;
	int last; /*last digit of n*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else if (last < 6)
	{
		printf("Last digit of %d is %d and is less", n, last);
		printf(" than 6 and not 0\n");
	}
	else if (last > 5)
	{
		printf("Last digit of %d is %d and is greater", n, last);
		printf(" than 5\n");
	}

	return (0);
}
