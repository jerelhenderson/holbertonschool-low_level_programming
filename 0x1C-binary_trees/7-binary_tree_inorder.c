#include "binary_trees.h"


/**
 * binary_tree_inorder - binary tree in-order traversal
 *
 * @tree: pointer to tree node
 * @func: pointer to main file print function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
