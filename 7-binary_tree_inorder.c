#include "binary_trees.h"
/**
 * binary_tree_inorder - prints a tree using preorder traversal.
 * 
 * preorder traversal LEFT, ROOT, RIGHT
 *
 * @tree: Pointer to the root of the tree
 * @func: pointer to a function.
 * Value of each node must be passed into this fxn
 *
 * Return: returns nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (tree->left)
		{
			binary_tree_inorder(tree->left, func);
		}
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
