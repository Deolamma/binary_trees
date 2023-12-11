#include "binary_trees.h"
/**
 * binary_tree_postorder - prints a tree using preorder traversal.
 *
 * preorder traversal LEFT, RIGHT, ROOT
 *
 * @tree: Pointer to the root of the tree
 * @func: pointer to a function.
 * Value of each node must be passed into this fxn
 *
 * Return: returns nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (tree->left)
		{
			binary_tree_postorder(tree->left, func);
		}

		if (tree->right)
		{
			binary_tree_postorder(tree->right, func);
		}
		func(tree->n);
	}
}
