#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: pointer to a binary tree
 *
 * Return: The size of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		h_left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		h_right = 1 + binary_tree_height(tree->right);

	return (h_left > h_right ? h_left : h_right);
}

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to a tree
 *
 * Return: Number of leafs counts the leaves in a binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}


/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect
 * @tree: Pointer to a tree
 *
 * Return: 1 if is perfect or 0 if is not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	unsigned long height, leaves;

	if (!tree)
		return (0);

	height = (unsigned long)binary_tree_height(tree);
	leaves = (unsigned long)binary_tree_leaves(tree);

	if ((pow(2, height)) == leaves)
		return (1);
	return (0);
}
