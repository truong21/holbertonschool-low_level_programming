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
	listint_t *tmp2;

	tmp2 = *head;
	while (head != NULL && tmp2 != NULL)
	{
		tmp = tmp2;
		tmp2 = tmp2->next;
		free(tmp);
	}
	*head = NULL;
}
