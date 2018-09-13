#include <stdio.h>

/**
 * main - prints alphabet in lowercase and then in uppercase
 * Return: 0
 */
int main(void)
{
	char a;
	char b;

	a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	b = 'A';
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	printf("\n");

	return (0);
}
