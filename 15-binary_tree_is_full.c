#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: pointer to the root node of the tree to check.
 * Return: If tree is NULL, your function must return 0.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t leftheight = 0, rightheight = 0;

	if (!tree)
		return (0);
	if (tree->left)
		leftheight = 1 + binary_tree_is_full(tree->left);
	if (tree->right)
		rightheight = 1 + binary_tree_is_full(tree->right);

	if ((leftheight + rightheight) == 0)
		return (0);
	if ((leftheight + rightheight) % 2 == 0)
		return (1);
	else
		return (0);
}
