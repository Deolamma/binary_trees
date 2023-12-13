#include "binary_trees.h"
/**
 * binary_tree_height - Calculates the height of a tree
 * @tree: This is the root node of the tree
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t countL;
	size_t countR;

	/* if tree is NULL or we are at a leafnode */
	if (!tree || (!(tree->left) && !(tree->right)))
		return (0);

	countL = binary_tree_height(tree->left);
	countR = binary_tree_height(tree->right);

	if (countL > countR)
		return (countL + 1);

	return (countR + 1);
}
