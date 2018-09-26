#include "holberton.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: integer
 */
int _atoi(char *s)
{
	int i, sign;
	unsigned int num;

	num = 0;
	sign = 1;
	while ((*s < '0' || *s > '9') && *s != '0')
	{
		if (*s == '-')
			sign *= -1;
	}
	for (i = 0; s[i] != '\0' && s[i] >= '0' && s[i] <= '9'; i++)
	{
			num = num * 10 + (s[i] - '0');
	}
	num *= sign;
	return (num);
}
