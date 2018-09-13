#include <stdio.h>

/**
 * main - prints alphabet in lowercase except q and e
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
		if (a == 'e' || a == 'q')
		{
			a++;
		}
	}
	printf("\n");

	return (0);
}
