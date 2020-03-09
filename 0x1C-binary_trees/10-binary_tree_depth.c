#include "binary_trees.h"


/**
 * binary_tree_depth - function measures depth of node in a binary tree
 *
 * @node: pointer to noode
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	int depth;

	depth = 0;

	if (node == NULL)
		return (0);

	while (node->parent != NULL)
	{
		node = node->parent;
		depth++;
	}
	return (depth);
}
