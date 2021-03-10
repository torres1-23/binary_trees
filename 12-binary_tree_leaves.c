#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree;
 * @tree: pointer to the root node of the tree to count the number of leaves.
 * Return: Number of leaves of binary tree or 0 if tree is NULL.
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n_leaves = 0;

	if (!tree)
		return (0);
	n_leaves += binary_tree_leaves(tree->left);
	n_leaves += binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		n_leaves += 1;
	return (n_leaves);
}
