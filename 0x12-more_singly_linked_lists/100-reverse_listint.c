#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to head node
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr, *next;

	if (*head == NULL)
		return (NULL);
	curr = *head;
	while (curr->next != NULL)
	{
		next = curr->next;
		curr->next = next->next;
		next->next = *head;
		*head = next;
	}
	return (*head);
}
