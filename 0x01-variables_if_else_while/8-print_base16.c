#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int a;

	a = 48;
	while (a < 58)
	{
		putchar(a);
		a++;
	}

	a = 97;
	while (a < 103)
	{
		putchar(a);
		a++;
	}
	putchar(10);

	return (0);
}
