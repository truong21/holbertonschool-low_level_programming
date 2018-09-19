#include "holberton.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int a, b, p, q, o;

	a = b = 0;
	q = 1;
	if ((n > 0) && (n < 16))
	{
		while (a < (n+1))
		{
			while (b < (n+1))
			{
				p = a * b;
				o = a * q;
				if (p < 10)
					_putchar(p + '0');
				else if (p < 100)
				{
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
				else
				{
					_putchar((p / 100) + '0');
					_putchar(((p / 10) % 10) + '0');
					_putchar((p % 10) + '0');
				}
				if ((b != n) && (o < 10))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if ((b != n) && (o < 100))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else if ((b != n) && (o >= 100))
				{
					_putchar(',');
					_putchar(' ');
				}
				b++;
				q++;
			}
			_putchar('\n');
			a++;
			b = 0;
			q = 1;
		}
	}
}
