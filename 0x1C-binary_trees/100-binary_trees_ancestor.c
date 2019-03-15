#include "binary_trees.h"

/**
 * child_check - checks if node is a descendant of input node
 * @ancestor: pointer to the ancestor node
 * @child: pointer to child node
 * Return: 1 if node are descendant of ancestor; 0 otherwise
 */
int child_check(const binary_tree_t *ancestor, const binary_tree_t *child)
{
	const binary_tree_t *tmp;

	tmp = child;
	while (tmp)
	{
		if (tmp == ancestor)
			return (1);
		tmp = tmp->parent;
	}
	return (0);
}

/**
 * binary_tree_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to lowest common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	const binary_tree_t *tmp;

	if (!first || !second)
		return (NULL);
	tmp = first;
	while (tmp)
	{
		if (child_check(tmp, second) == 1)
			return ((binary_tree_t *)tmp);
		tmp = tmp->parent;
	}
	return (NULL);
}
