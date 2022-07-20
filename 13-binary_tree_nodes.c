#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts the nodes with
 * at least 1 child in a binary tree.
 *
 * @tree: Pointer to a Binary tree.
 *
 * Return: Number of nodes that at least have child in Binary tree.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree && (tree->left || tree->right))
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	return (0);
}
