#include "binary_trees.h"

/**
 * binary_tree_node - creates a parent node in a binary tree
 * @parent: parent node of the node to be created
 * @value: value of new node
 * Return: pointer to newly created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->left = new_node->right = NULL;
	if (!parent)
		new_node->parent = NULL;
	else
		new_node->parent = parent;

	return (new_node);
}
