#include "binary_trees.h"


/**
 * binary_tree_leaves - function counts number of leaves in a binary tree
 *
 * @tree: pointer to root node
 * Return: number of leaves, or 0 if NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaf_num;
	size_t right_leaf_num;

	left_leaf_num = 0;
	right_leaf_num = 0;

	if (tree == NULL)
		return (0);

	left_leaf_num = left_leaf_num + binary_tree_leaves(tree->left);
	right_leaf_num = right_leaf_num + binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
	{
		left_leaf_num++;
		right_leaf_num++;
	}
	return ((left_leaf_num + right_leaf_num) / 2);
}
