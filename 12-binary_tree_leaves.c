#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leafnodes in a tree
 * @tree: root node of the tree
 * Return: returns the number of leafnodes in a tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t countLeafL;
	size_t countLeafR;

	/* if tree/node is NULL or doesnt't exist */
	if (!tree)
		return (0);
	/* if node is a leaf node return 1 */
	if (!(tree->left) && !(tree->right))
		return (1);

	/* go left then right */

	countLeafL = binary_tree_leaves(tree->left);
	countLeafR = binary_tree_leaves(tree->right);

	return (countLeafL + countLeafR);
}
