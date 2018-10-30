#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: double pointer to the head of the listint_t list
 * @index: index of list
 * Return: pointer to the nth node of list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	if (head == NULL)
		return (NULL);
	return (head);
}
