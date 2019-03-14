#include "binary_trees.h"

/**
 * max - computes the max depth of the two child nodes
 * @a: depth of left node
 * @b: depth of right node
 * Return: max
 */
int max(int a, int b)
{
	if (a < b)
		return (b);
	else
		return (a);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node fo the tree
 * Return: height of tree value
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((!tree->left && !tree->right) && tree)
		return (0);
	return (1 + max(binary_tree_height(tree->left),
			binary_tree_height(tree->right)));
}
