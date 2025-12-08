#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_leaf - create a binary tree
 * @node: node
 * Return: a pointer to the new binary tree
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
