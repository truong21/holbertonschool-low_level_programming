#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the numbers of elements in a linked list_t list
 * @h: head of linked list
 * Return: numbers of elements
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
