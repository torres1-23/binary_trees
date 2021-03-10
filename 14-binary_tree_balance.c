#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 * Return: Blance factor of binary tree or 0 if tree is NULL.
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int leftheight = 0, rightheight = 0;

	if (!tree)
		return (0);
	leftheight = binary_tree_height(tree->left);
	rightheight = binary_tree_height(tree->right);
	printf("%d\n", leftheight);
	printf("%d\n", rightheight);
	return (leftheight - rightheight);
}

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
	else
		leftheight = 1;
	if (tree->right)
		rightheight = 1 + binary_tree_height(tree->right);
	else
		rightheight = 1;
	if (leftheight > rightheight)
		return (leftheight);
	else
		return (rightheight);
}
