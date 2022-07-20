#include "binary_trees.h"

/**
 * binary_trees_ancestor - Function that finds the lowest
 * common ancestor of two nodes
 * @first: Pointer to first node
 * @second: Pointer to second node
 *
 * Return: Pointer to the lowest common ancestor node of the two given nodes
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				const binary_tree_t *second)
{
	binary_tree_t *left_pa = NULL, *right_pa = NULL;
	binary_tree_t *holder = NULL;

	if (!first || !second)
		return (NULL);

	left_pa = (binary_tree_t *)first;
	right_pa = (binary_tree_t *)second;
	holder = (binary_tree_t *)second;

	if (first == second)
		return (left_pa);

	for (; left_pa; left_pa = left_pa->parent)
		for (right_pa = holder; right_pa; right_pa = right_pa->parent)
			if (left_pa == right_pa)
				return (left_pa);
	return (NULL);
}
