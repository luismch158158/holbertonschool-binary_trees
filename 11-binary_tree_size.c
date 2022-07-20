#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of Binary tree.
 *
 * @tree: Pointer to binary tree.
 *
 * Return: Depth of the node.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
