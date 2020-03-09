#include "binary_trees.h"


/**
 * binary_tree_leaves - function counts number of leaves in a binary tree
 *
 * @tree: pointer to root node
 * Return: number of leaves, or 0 if NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_num;

	leaf_num = 0;

	if (tree == NULL)
		return (0);

	leaf_num = leaf_num + binary_tree_leaves(tree->left);
	leaf_num = leaf_num + binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		leaf_num++;
	return (leaf_num);
}
