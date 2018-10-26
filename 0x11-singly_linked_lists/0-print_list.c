#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list_t list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n;
	char *s;
	unsigned int length;

	n = 0;
	while (h != NULL)
	{
		s = h->str;
		length = h->len;
		if (s == NULL)
		{
			s = "(nil)";
			length = 0;
		}
		else if (*s == '\0')
			length = 0;
		printf("[%d] %s\n", length, s);
		h = h->next;
		n++;
	}
	return (n);
}
