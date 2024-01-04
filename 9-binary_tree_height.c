#include "binary_trees.h"

/**
 * max - Find the maximum of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return:
 * The maximum of the two integers.
 */
int max(int a, int b)
{
	return (a >= b ? a : b);
}

/**
 * binary_tree_height - Calculate the height of a binary tree
 * @tree: Pointer to the root node of the binary tree
 *
 * Description:
 * This function calculates the height of a binary tree.
 * The height of a binary tree is the length of the longest path from
 * the root node to a leaf node.
 *
 * Return:
 * The height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height, node_height;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	node_height = 1 + max(left_height, right_height);

	return (node_height);
}
