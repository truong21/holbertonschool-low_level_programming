#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - sum of a and b
 * @a: integer a
 * @b: integer b
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction of a by b
 * @a: integer a
 * @b: integer b
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply a with b
 * @a: integer a
 * @b: integer b
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide a by b
 * @a: integer a
 * @b: integer b
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - calculate remainder
 * @a: integer a
 * @b: integer b
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
