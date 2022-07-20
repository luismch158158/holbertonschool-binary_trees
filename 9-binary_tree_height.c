#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of binary tree
 *
 * @tree: Pointer to binary tree.
 *
 * Return: Size of binary tree.
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
