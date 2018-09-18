#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: nothing
 */
void times_table(void)
{
	int a, b, p;

	a = b = 0;
	while (a < 10)
	{
		while (b < 10)
		{
			p = a * b;
			if (p < 10)
				_putchar(p + '0');
			else
			{
				_putchar(8);
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			if ((b != 9) && (p < 10))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if ((b != 9) && (p >= 10))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
		b = 0;
	}
}
