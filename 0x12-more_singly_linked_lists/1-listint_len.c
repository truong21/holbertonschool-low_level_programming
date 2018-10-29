#include "lists.h"
/**
 * listint_len - returns the numbers of elements in a linked listint_t list
 * @h: head of linked list
 * Return: numbers of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
