#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to a binary tree.
 *
 * Return: The size of the binary tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		height_right = 1 + binary_tree_height(tree->right);

	return (height_left > height_right ? height_left : height_right);
}

/**
 * actual_level - Function that print the nodes of the current level
 *
 * @tree: Pointer to a binary tree.
 * @func: Is a pointer to a function to call for each node. The value in the
 * node must be passed as a parameter to this function.
 * @level: level of node to binary tree
 *
 * Return: Void
 */

void actual_level(binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree)
		return;
	if (level == 0)
	{
		func(tree->n);
	}
	else
	{
		actual_level(tree->left, level - 1, func);
		actual_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - Measures the height of a binary tree
 *
 * @tree: Pointer to a binary tree.
 * @func: Is a pointer to a function to call for each node. The value in the
 * node must be passed as a parameter to this function.
 *
 * Return: The size of the binary tree.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level = 0, i = 0;
	binary_tree_t *holder = (binary_tree_t *)tree;

	if (!tree)
		return;

	if (!func)
		return;

	level = binary_tree_height(tree);

	for (; i <= level; i++)
		actual_level(holder, i, func);
}
