#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The number of nodes in the tree.
 *         If tree is NULL, returns 0.
 *
 * Description:
 * The size of a binary tree is the total number of nodes it contains.
 * This function recursively counts the current node (1) plus the size
 * of the left subtree and the size of the right subtree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right;
	size_t left;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + right + 1);
}
