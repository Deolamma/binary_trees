#include "binary_trees.h"
/**
 * binary_tree_depth - Calculates the depth of a tree's node
 * @tree: This is the node to measure it's depth
 * Return: height of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count;

	/* if tree is NULL or we are the root of the tree */
	if (!tree || !(tree->parent))
		return (0);

	/* keep going up top until your reach the root */
	count = binary_tree_depth(tree->parent);

	return (count + 1);
}
