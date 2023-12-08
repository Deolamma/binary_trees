#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a certain node is a leaf node
 * @node: This is node to check
 * Return: Returns 1 if node is leaf OR 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (!(node->left) && !(node->right))
	{
		return (1);
	}

	return (0);
}
