#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * prints_c - prints character
 * @list: variable list
 * @sep: separator
 * Return: Nothing
 */
void prints_c(va_list list, char *sep)
{
	printf("%s%c", sep, va_arg(list, int));
}
/**
 * prints_i - prints integer
 * @list: variable list
 * @sep: separator
 * Return: Nothing
 */
void prints_i(va_list list, char *sep)
{
	printf("%s%d", sep, va_arg(list, int));
}
/**
 * prints_f - prints float
 * @list: variable list
 * @sep: separator
 * Return: Nothing
 */
void prints_f(va_list list, char *sep)
{
	printf("%s%f", sep, va_arg(list, double));
}
/**
 * prints_s - prints string
 * @list: variable list
 * @sep: separator
 * Return: Nothing
 */
void prints_s(va_list list, char *sep)
{
	char *str;

	str = va_arg(list, char*);
	if (str == NULL)
		str = "(nil)";
	printf("%s%s", sep, str);
}
/**
 * print_all - prints anything including char, integer, float, char *
 * @format: format string
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list print;
	int i, j;
	char *sep;

	types_t tt[] = {
		{"c", prints_c},
		{"i", prints_i},
		{"f", prints_f},
		{"s", prints_s},
		{NULL, NULL}
	};

	va_start(print, format);
	i = 0;
	sep = "";
	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(tt[j]).type)
			{
				tt[j].f(print, sep);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(print);
	printf("\n");
}
