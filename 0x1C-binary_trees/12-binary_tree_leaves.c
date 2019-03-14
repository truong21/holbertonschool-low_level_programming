#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the leaves of a binary tree node
 * @tree: pointer to the node of the tree
 * Return: number of leaves of a node
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (!tree)
		return (0);
	if (tree->left)
		leaf++;
	if (tree->right)
		leaf++;
	if ((!tree->left && !tree->right) && tree)
		leaf++;
	return (leaf);
}
