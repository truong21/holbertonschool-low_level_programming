#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name
 * @f: pointer to print_name_as_is
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);

	ptr = f;
	ptr(name);
}
