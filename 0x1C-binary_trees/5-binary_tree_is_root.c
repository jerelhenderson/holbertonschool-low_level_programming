#include "binary_trees.h"


/**
 * binary_tree_is_root - function checks if node is root
 *
 * @node: pointer to node to check
 * Return: return 1 if node is root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	return (0);
}
