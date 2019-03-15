#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling nodes of a binary tree node
 * @node: pointer to a node on the tree
 * Return: pointer to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if (node == node->parent->left)
	{
		if (node->parent->right)
			return (node->parent->right);
	}
	else if (node == node->parent->right)
	{
		if (node->parent->left)
			return (node->parent->left);
	}
	return (NULL);
}
