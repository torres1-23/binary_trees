#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf.
 * @node: pointer to check.
 * Return: 1 if is a leaf, 0 otherwise.
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}