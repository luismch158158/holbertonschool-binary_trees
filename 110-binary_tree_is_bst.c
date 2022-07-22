#include "binary_trees.h"

/**
 * valid_bst - function that checks if is a bst
 * @root: Pointer to a node of the tree
 * @min: min node value
 * @max: max node value
 *
 * Return: 1 if node is a leaf, 0 otherwise.
 */

int valid_bst(const binary_tree_t *root, const binary_tree_t *min,
		const binary_tree_t *max)
{
	int left_hand, right_hand;

	if (!root)
		return (1);

	if (min && root->n <= min->n)
		return (0);

	if (max && root->n >= max->n)
		return (0);

	left_hand = valid_bst(root->left, min, root);
	right_hand = valid_bst(root->right, root, max);

	return (left_hand && right_hand);
}


/**
 * binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid BST, and 0 otherwise.
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (valid_bst(tree, NULL, NULL));
}
