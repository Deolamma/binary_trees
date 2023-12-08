#include "binary_trees.h"
/**
 * binary_tree_is_root - This Checks that a node is the root node
 * @node: node to check
 * Return: 1 if node is root OR 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}

	if (!(node->parent))
	{
		return (1);
	}

	return (0);
}
