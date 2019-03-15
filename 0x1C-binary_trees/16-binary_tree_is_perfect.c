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
 * helper_size - measures the size of a binary tree
 * @tree: pointer to the node of the tree
 * Return: size
 */
size_t helper_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + helper_size(tree->left) +
		helper_size(tree->right));
}
/**
 * _pow - finds the power between two numbers
 * @x: number to find to the power of
 * @n: power
 * Return: the x to the n
 */

size_t _pow(int x, int n)
{
	int i;
	size_t number = 1;

	for (i = 1; i < n; i++)
		number *= x;
	return (number);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the node of a binary tree
 * Return: 1 if full tree; otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0, size = 0, perfect = 0;

	if (!tree)
		return (0);
	height = helper_height(tree);
	size = helper_size(tree);
	perfect = (_pow(2, height + 1) - 1);
	if (size == perfect)
		return (1);
	return (0);
}
