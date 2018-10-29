#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a give position
 * @head: double pointer to head node
 * @idx: index of the list where the new node should be added
 * @n: integer to be added to new node
 * Return: pointer to new node; NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL && n)
	{
		free(new_node);
		return (NULL);
	}
	tmp = *head;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		for (i = 0; i < (idx - 1); i++)
			tmp = tmp->next;
		new_node->next = tmp->next;
		tmp->next = new_node;
	}
	return (new_node);
}
