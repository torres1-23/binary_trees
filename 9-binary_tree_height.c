#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: Height of binary tree or 0 if tree is NULL.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftheight = 0, rightheight = 0;

	if (!tree)
		return (0);
	if (tree->left)
		leftheight = 1 + binary_tree_height(tree->left);
	if (tree->right)
		rightheight = 1 + binary_tree_height(tree->right);
	if (leftheight > rightheight)
		return (leftheight);
	else
		return (rightheight);
}
