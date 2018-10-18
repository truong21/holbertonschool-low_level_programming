#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects correct function to perform operation
 * @s: operator passed as argument
 * Return: pointer to the function that corresponds to the operator given
 * as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul},
		{"/", op_div}, {"%", op_mod}, {NULL, NULL}};
	int i;

	while (i < 6)
	{
		if (*s == *(ops[i]).op)
			return (*(ops[i]).f);
		i++;
	}
	return (NULL);
}
