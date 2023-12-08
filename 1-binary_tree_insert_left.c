#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a newNode as the left-child of another
 * node. If the node has a left child already, it sets the existing left-child
 * as it's (the new child's) left child
 * @parent: pointer of the node to insert the left-child in
 * @value: data to be stored in the newNode
 * Return: returns the pointer to the newly created child or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
	{
		/* cannot create left-child of a tree that doesn't exist */
		return (NULL);
	}

	/* create the node to be stored in the left of parent */
	newNode = binary_tree_node(parent, value);

	if (!newNode)
	{
		/* newNode wasn't created succesfully */
		return (NULL);
	}

	/* if parent already has a left child */
	if (parent->left)
	{
		/* connect former left-child of parent to left of newNode */
		newNode->left = parent->left;
		/* This updates the existing left child's parent to the newNode */
		newNode->left->parent = newNode;
	}

	/* set the newNode to left of parent */
	parent->left = newNode;

	return (newNode);
}
