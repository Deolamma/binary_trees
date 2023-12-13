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
		/* Keep going left until "left leafnode" */
		binary_tree_postorder(tree->left, func);

		/* Keep going right until "right leafnode" */
		binary_tree_postorder(tree->right, func);
		
		/* print node */
		func(tree->n);
	}
}
