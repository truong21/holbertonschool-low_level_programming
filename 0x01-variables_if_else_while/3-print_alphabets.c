#include <stdio.h>

/**
 * main - prints alphabet in lowercase and then in uppercase
 * Return: 0
 */
int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	a = 'A';
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar("\n");

	return (0);
}
