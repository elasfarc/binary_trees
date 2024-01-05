#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the number of leaf nodes in a binary tree
 * @tree: Pointer to the root node of the binary tree
 *
 * Return:
 * The number of leaf nodes in the binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	int is_leaf = tree && !tree->left && !tree->right;

	return (
		is_leaf +
		binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right)
	);

}
