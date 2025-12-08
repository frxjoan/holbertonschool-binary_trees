#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height - create a binary tree
 * @tree: node
 * Return: a pointer to the new binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (1 + left);
	return (1 + right);
}

/**
 * binary_tree_balance - create a binary tree
 * @tree: node
 * Return: a pointer to the new binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int calc;

	if (tree == NULL)
		return (0);
	calc = binary_tree_height(tree->left) - binary_tree_height(tree->right);
	return (calc);
}
