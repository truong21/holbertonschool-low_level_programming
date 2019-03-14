#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree node
 * @tree: pointer to the root node fo the tree
 * Return: height of tree value
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((!tree->parent) && tree)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
