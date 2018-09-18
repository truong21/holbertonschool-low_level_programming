#include "holberton.h"

/**
 * jack_bauer  - prints every minute of the day from 00:00 to 23:59
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int i, j, k, n;

	i = j = k = n = 0;
	while (i < 3)
	{
		while (j < 10) 
		{
			while (k < 6)
			{
				while (n < 10)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(n + '0');
					_putchar('\n');
					n++;
				}
				k++;
				n = 0;
			}
			j++;
			k = 0;
			if ((i == 2) && (j == 4))
				break;
		}
		i++;
		j = 0;
	}
}
