#include "binary_trees.h"


/**
 * binary_tree_nodes - function counts number of nodes with one child
 *
 * @tree: pointer to root node
 * Return: number of nodes, or 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_node_num;
	size_t right_node_num;

	left_node_num = 0;
	right_node_num = 0;

	if (tree == NULL)
		return (0);

	left_node_num = left_node_num + binary_tree_nodes(tree->left);
	right_node_num = right_node_num + binary_tree_nodes(tree->right);
	if (tree->left == NULL && tree->right == NULL)
	{
		left_node_num++;
		right_node_num++;
	}
	return (left_node_num + right_node_num);
}
