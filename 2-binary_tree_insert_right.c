#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node to the right of a parent.
 * If parent already contains right node replace the existing right node
 * with newNode and set the newNode as parent of the former right node
 * @parent: This is pointer to the node to insert the right-child in
 * @value: This is the value to be stored in the newNode
 * Return: returns the newly created node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
	{
		/* cannot insert into right of tree that doesn't exist */
		return (NULL);
	}

	/* Create newNode to be inserted in right of parent */
	newNode = binary_tree_node(parent, value);

	/* If creation of node fails */
	if (!newNode)
	{
		return (NULL);
	}

	if (parent->right)
	{
		newNode->right = parent->right;
		newNode->right->parent = newNode;
	}
	
	parent->right = newNode;

	return (newNode);
}
