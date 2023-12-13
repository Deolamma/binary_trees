#include "binary_trees.h"

/**
 * binary_tree_size - calculates the size of a tree
 * @tree: root node of the tree
 * Return: returns the size of the tree or null
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t countL;
	size_t countR;

	/* if tree is NULL or doesnt't exist */
	if (!tree)
		return (0);
	/* if node is a leaf node return 1 */
	if (!(tree->left) && !(tree->right))
		return (1);

	/* go left then right */

	countL = binary_tree_size(tree->left);
	countR = binary_tree_size(tree->right);

	return (countL + countR + 1);
}
