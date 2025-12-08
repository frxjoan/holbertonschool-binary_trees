#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth - create a binary tree
 * @tree: node
 * Return: a pointer to the new binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
