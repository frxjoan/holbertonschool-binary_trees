#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_uncle - create a binary tree
 * @node: node
 * Return: a pointer to the new binary tree
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);
	return (node->parent->parent->right);
}
