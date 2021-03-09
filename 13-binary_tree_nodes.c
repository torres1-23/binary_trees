#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of nodes.
 * Return: Number of nodes of binary tree or 0 if tree is NULL.
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n_nodes = 0;

	if (!tree)
		return (0);
	n_nodes += binary_tree_nodes(tree->left);
	n_nodes += binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		n_nodes += 1;
	return (n_nodes);
}
