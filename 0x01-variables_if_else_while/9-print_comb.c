#include <stdio.h>

/**
 * main - prints all possible combo of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int a;

	a = 48;
	while (a < 58)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');

	return (0);
}
