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
 * helper_height - measures the height of a binary tree
 * @tree: pointer to the root node fo the tree
 * Return: height of tree value
 */
size_t helper_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + max(helper_height(tree->left),
			helper_height(tree->right)));
}

/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: pointer to the node of the tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	left = helper_height(tree->left);
	right = helper_height(tree->right);
	return (left - right);
}
