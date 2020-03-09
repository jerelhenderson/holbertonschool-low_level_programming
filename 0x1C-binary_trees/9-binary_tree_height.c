#include "binary_trees.h"


/**
 * binary_tree_height - function measures height of a binary tree
 *
 * @tree: pointer to root node
 * Return: height of the tree, or 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side = 0;
	size_t right_side = 0;

	if (tree == NULL)
		return (0);

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);
	if (left_side > right_side)
		return (left_side + 1);
	return (right_side + 1);
}
