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
 * binary_tree_print_level - create a binary tree
 * @tree: p
 * @level: d
 * @func: value
 * Return: void
 */
void binary_tree_print_level(const binary_tree_t *tree,
	 size_t level, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (level == 0)
		func(tree->n);
	else if (level > 0)
	{
		binary_tree_print_level(tree->left, level - 1, func);
		binary_tree_print_level(tree->right, level - 1, func);
	}
}
/**
 * binary_tree_levelorder - create a binary tree
 * @tree: p
 * @func: value
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t i;

	if (tree == NULL || func == NULL)
		return;
	for (i = 0; i < binary_tree_height(tree); i++)
	{
		binary_tree_print_level(tree, i, func);
	}
}
