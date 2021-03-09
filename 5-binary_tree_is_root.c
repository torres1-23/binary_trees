#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root.
 * @node: pointer to check.
 * Return: 1 if is a root, 0 otherwise.
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
