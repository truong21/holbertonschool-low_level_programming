#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		putchar(a);
	}
	putchar(10);

	return (0);
}
