#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is full.
 * @tree: pointer to the root node of the tree to check.
 * Return: If tree is NULL, your function must return 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t izquierdo = 0;
	size_t derecho = 0;

	if (tree->left)
		izquierdo = 1 + binary_tree_height(tree->left);
	if (tree->right)
		derecho = 1 + binary_tree_height(tree->right);

	if (derecho == izquierdo)
	{
		return (binary_tree_is_full(tree));
	}
	return (0);
}

/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: pointer to the root node of the tree to check.
 * Return: If tree is NULL, your function must return 0.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
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
	if (tree->right)
		rightheight = 1 + binary_tree_height(tree->right);

	if (leftheight > rightheight)
		return (leftheight);
	else
		return (rightheight);
}
