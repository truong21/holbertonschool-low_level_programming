#include <stdio.h>

/**
 * main - prints numbers from 00 to 99
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	a = 48;
	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			putchar(a);
			putchar(b);
			putchar(44);
			putchar(32);
			b++;
		}
		a++;
	}
	putchar(10);

	return (0);
}
