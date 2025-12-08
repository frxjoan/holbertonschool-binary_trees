#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_leaves - create a binary tree
 * @tree: node
 * Return: a pointer to the new binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
