#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node's data (n)
 * @head: double pointer to the head of hte listint_t list
 * Return: head node integer
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	n = 0;
	tmp = *head;
	if (head != NULL && *head != NULL)
	{
		tmp = *head;
		n = tmp->n;
		*head = (*head)->next;
		free(tmp);
	}
	return (n);
}
