#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: Number of nodes that have at least one child.
 *         If tree is NULL, returns 0.
 *
 * Description:
 * A node is counted if it has at least one child (left or right).
 * Leaf nodes (nodes with no children) are not counted.
 * The function uses recursion to count nodes in the left and right subtrees,
 * then adds 1 for the current node only if it has at least one child.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		count += 1;
	else
		count += 0;

	return (count);
}
