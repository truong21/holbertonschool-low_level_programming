#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to the head of hte listint_t list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (head != NULL && *head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
