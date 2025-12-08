#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - create a binary tree
 * @parent: p
 * @value: value
 * Return: a pointer to the new binary tree
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child;

	new_child = malloc(sizeof(binary_tree_t));
	if (new_child == NULL || parent == NULL)
		return (NULL);
	new_child->n = value;
	new_child->parent = parent;
	new_child->left = NULL;
	new_child->right = NULL;

	if (parent->right == NULL)
		parent->right = new_child;
	else
	{
		new_child->right = parent->right;
		parent->right = new_child;
		new_child->right->parent = new_child;
	}
	return (new_child);
}
