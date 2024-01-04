#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left-child of another node.
* @parent: pointer to the node to insert the left-child in
* @value: the value to store in the new node
*
* Description: If parent already has a left-child,
*				the new node takes its place,
*				and the old left-child is set as the left-child of the new node.
*
* Return: a pointer to the created node,
*	or NULL on failure or if parent is NULL
*
*
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = NULL;

	if (parent->left)
	{
		node->left = parent->left;
		node->left->parent = node;
	}
	parent->left = node;

	return (node);

}
