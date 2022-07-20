#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: pointer to a tree
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
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to a tree
 *
 * Return: measures the balance factor of a binary tree or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left = 0, h_right = 0;

	if (!tree)
		return (0);

	h_left = (tree->left) ? (int)binary_tree_height(tree->left) : -1;
	h_right = (tree->right) ? (int)binary_tree_height(tree->right) : -1;

	return (h_left - h_right);
}
