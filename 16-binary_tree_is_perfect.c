#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 * Return: 1 if binary tree is perfect, 0 otherwise.
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	depth = binary_tree_depth(tree);
	return (is_perfect_recursion(tree, depth, 0));
}

/**
 * is_perfect_recursion - go through binary tree checking if it is full.
 * @tree: pointer to the root node of the tree to check.
 * @depth: depth of leftmost node.
 * @level: level of binary tree.
 * Return: 1 if binary tree is perfect, 0 otherwise.
*/

int is_perfect_recursion(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursion(tree->left, depth, level + 1)
		&& is_perfect_recursion(tree->right, depth, level + 1));
}

/**
 * binary_tree_depth - measures the depth of leftmost node in a binary tree;
 * @tree: pointer to the root node of the tree to measure the depth.
 * Return: Depth of lfmost node of binary tree or 0 if tree is NULL.
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree != NULL)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}
