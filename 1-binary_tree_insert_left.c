#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 * @parent: pointer to the parent node of the node to create.
 * @value: value to put in the new node.
 * Return: a pointer to the new node.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent)
	{
		new_node = binary_tree_node(parent, value);
		if (!new_node)
			return (NULL);
		if (parent->left)
		{
			new_node->left = parent->left;
			new_node->left->parent = new_node;
		}
		parent->left = new_node;
		return (new_node);
	}
	return (NULL);
}
