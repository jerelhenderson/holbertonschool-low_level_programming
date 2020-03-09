#include "binary_trees.h"


/**
 * binary_tree_nodes - function counts number of nodes with one child
 *
 * @tree: pointer to root node
 * Return: number of nodes, or 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_num;

	node_num = 0;

	if (tree == NULL)
		return (0);

	node_num = node_num + binary_tree_nodes(tree->left);
	node_num = node_num + binary_tree_nodes(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		node_num++;
	return (node_num);
}
