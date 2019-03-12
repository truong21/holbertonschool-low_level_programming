#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: parent node of the node to be created
 * @value: value of new node
 * Return: pointer to newly created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	new_node->n = value;
	new_node->left = new_node->right = NULL;
	if (!new_node)
		return (NULL);
	if (!parent)
		return (NULL);
	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		new_node->parent = parent;
		parent->left =  new_node;
	}
	else
	{
		parent->left = new_node;
		new_node->parent = parent;
	}
	return (new_node);
}	
