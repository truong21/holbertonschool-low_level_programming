#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: name
 * @f: pointer to print_name_as_is
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);

	if (name == NULL || f == NULL)
		return;
	ptr = f;
	ptr(name);
}
