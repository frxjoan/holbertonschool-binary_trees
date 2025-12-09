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
/**
 * binary_trees_ancestor - create a binary tree
 * @first: p
 * @second: value
 * Return: a pointer to the new binary tree
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	 const binary_tree_t *second)
{
	int depth_f;
	int depth_s;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	depth_f = binary_tree_depth(first);
	depth_s = binary_tree_depth(second);
	if (depth_f > depth_s)
		return (binary_trees_ancestor(first->parent, second));
	if (depth_s > depth_f)
		return (binary_trees_ancestor(first, second->parent));
	else if (first->parent == second->parent)
		return (first->parent);
	else
		return (binary_trees_ancestor(first->parent, second->parent));
}
