#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Height of the tree. If tree is NULL, returns 0.
 *
 * Description:
 * The height of a binary tree is the number of edges on the longest path
 * from the root node down to the farthest leaf node.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_left = 0;
	int height_right = 0;
	
	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
		return (1 + height_left);
	else
		return (1 + height_right);
}
