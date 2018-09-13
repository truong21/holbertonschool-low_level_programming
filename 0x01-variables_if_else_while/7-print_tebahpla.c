#include <stdio.h>

/**
 * main - prints alphabet in lowercase in reverse
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'z' ; a >= 'a' ; a--)
	{
		putchar(a);
	}
	putchar(10);

	return (0);
}
