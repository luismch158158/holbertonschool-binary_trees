#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is root
 *
 * @node: Pointer to a node of tree
 *
 * Return: 1 if node is root, 0 otherwise.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
