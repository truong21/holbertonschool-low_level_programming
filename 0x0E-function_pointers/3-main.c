#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "3-calc.h"
/**
 * main - performs arithmetic operations
 * @argc: argument count
 * @argv: integers and operater
 * Return: 0 (Success); 98, 99, or 100 otherwise
 */
int main(int argc, char *argv[])
{
	char op;
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2][0];
	if ((op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
		|| argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((op == '/' || op == '%') && num2  == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);
	return (0);
}
