#include "binary_trees.h"
/**
 * binary_tree_preorder - prints a tree using preorder traversal.
 * preorder traversal ROOT, LEFT, RIGHT
 *
 * @tree: Pointer to the root of the tree
 * @func: pointer to a function.
 * Value of each node must be passed into this fxn
 *
 * Return: returns nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
