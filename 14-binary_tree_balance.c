#include "binary_trees.h"

/**
 *  binary_tree_height - measures the height of a binary tree
 *  @tree: pointer to the root node of the tree to measure the height
 *
 *  Return: the height of the binary tree
 *	if tree is NULL returns 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height, max_path;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	max_path = left_height >= right_height
		? left_height
		: right_height;

	return ((tree->left || tree->right) + max_path);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (
			((tree->left ? 1 : 0) + binary_tree_height(tree->left)) -
			((tree->right ? 1 : 0) + binary_tree_height(tree->right))
		);
}
