#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index of dlinked list
 * @h: pointer to head node of list
 * @idx: index
 * @n: number
 * Return: pointer to node; NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node, *tmp, *tmp2;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = new_node->next = NULL;
	if (*h == NULL && idx > 0)
	{
		free(new_node);
		return (NULL);
	}
	tmp = *h;
	tmp2 = (*h)->next;
	if (idx == 0)
	{
		new_node->next = tmp;
		tmp2->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	else
	{
		for (i = 0; i < (idx - 1); i++)
		{
			tmp = tmp->next;
			if (tmp == NULL)
			{
				free(new_node);
				return (NULL);
			}
		}
		new_node->next = tmp->next;
		new_node->prev = tmp;
		tmp->next = new_node;
		tmp = new_node->next;
		tmp->prev = new_node;
		return (new_node);
	}
	return (NULL);
}
