#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index, index, of a listint_t
 * linked list
 * @head: double pointer to head node
 * @index: index of the list where the node should be deleted
 * Return: 1 (Success); -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp2;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	tmp = tmp2 = *head;
	tmp2 = tmp2->next;
	if (index == 0 && *head != NULL)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
		tmp2 = tmp2->next;
	}
	tmp->next = tmp2->next;
	free(tmp2);
	return (1);
}
