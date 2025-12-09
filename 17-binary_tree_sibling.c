#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree
 * @node: Pointer to the node to find the sibling of
 *
 * Return: Pointer to the sibling node
 *         If node is NULL, has no parent, or has no sibling, returns NULL
 *
 * Description:
 * The sibling of a node is the other child of its parent.
 * This function checks if the node exists and has a parent.
 * If so, it returns the parent's other child (the sibling).
 * If the node is the only child, or if it has no parent, NULL is returned.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL)
		return (NULL);

	parent = node->parent;

	if (parent == NULL)
		return (NULL);

	if (parent->left == node)
		return (parent->right);

	if (parent->right == node)
		return (parent->left);

	return (NULL);
}
