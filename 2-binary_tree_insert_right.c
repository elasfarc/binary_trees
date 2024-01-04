#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node as the right-child of another node.
* @parent: pointer to the node to insert the right-child in
* @value: the value to store in the new node
*
* Description: If parent already has a right-child,
*				the new node takes its place,
*				and the old right-child is set as the right-child of the new node.
*
* Return: a pointer to the created node,
*	or NULL on failure or if parent is NULL
*
*
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *old_parent_right;

	if (!parent)
		return (NULL);

	old_parent_right = parent->right;

	node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->parent  = parent;
	node->n = value;
	node->left = NULL;
	node->right = old_parent_right;

	if (old_parent_right)
		old_parent_right->parent = node;
	parent->right = node;

	return (node);
}
