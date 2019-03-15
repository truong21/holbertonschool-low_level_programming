#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle node of a binary tree node
 * @node: pointer to a node on the tree
 * Return: pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->right)
		return (node->parent->parent->right);
	if (node->parent->parent->left)
		return (node->parent->parent->left);
	return (NULL);
}
