#include "sort.h"

/**
 * cocktail_sort_list - sort a random array of integers using cocktail method
 * @list: a pointer to the first node of the linked list
 * Return: No Value
 */
void cocktail_sort_list(listint_t **list)
{
	unsigned char flag = 1;
	listint_t *curr, *curr2;

	if (!list || !(*list) || !((*list)->next))
		return;
	while (flag)
	{
		flag = 0;
		for (curr = *list; curr; curr = curr->next)
		{
			if (curr->prev && (curr->prev->n > curr->n))
			{
				flag = 1;
				cocktail_node_swap(&curr, 0);
				if (!curr->prev->prev)
					*list = curr->prev;
				print_list(*list);
			}
			if (curr->next == NULL)
				curr2 = curr;
		}
		for (; curr2; curr2 = curr2->prev)
		{
			if (curr2->next && (curr2->next->n < curr2->n))
			{
				flag = 1;
				cocktail_node_swap(&curr2, 1);
				if (curr2->prev == NULL)
					*list = curr2;
				print_list(*list);
			}
		}
	}
}

/**
 * cocktail_node_swap - swaps two nodes while sorting w/ cocktail method
 * @curr: a pointer to a pointer to the current node to be compared
 * @mode: switch distinguishing between forward and backward iteration
 * Return: No Value
 */
void cocktail_node_swap(listint_t **curr, unsigned char mode)
{
	listint_t *tmp = NULL, *ptmp = NULL;

	if (mode == 0)
	{
		tmp = (*curr)->prev;
		if (tmp)
			ptmp = tmp->prev;
		if ((*curr)->next)
			(*curr)->next->prev = tmp;
		tmp->next = (*curr)->next;
		tmp->prev = *curr;
		(*curr)->next = tmp;
		(*curr)->prev = ptmp;
		if (ptmp)
			ptmp->next = *curr;
		*curr = tmp;
	}
	else if (mode == 1)
	{
		tmp = (*curr)->next;
		if (tmp)
			ptmp = tmp->next;
		if ((*curr)->prev)
			(*curr)->prev->next = tmp;
		tmp->prev = (*curr)->prev;
		tmp->next = *curr;
		(*curr)->prev = tmp;
		(*curr)->next = ptmp;
		if (ptmp)
			ptmp->prev = *curr;
		*curr = tmp;
	}
}
