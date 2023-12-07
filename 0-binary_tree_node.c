#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new node
 * @parent: this is the parent of the node to be created
 * @value: data to be stored in the node
 * Return: Returns a pointer to the newNode
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
	{
		/* Memory allocation fails */
		return (NULL);
	}

	/* Create node - recall parent is the parent of newNode */
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	return (newNode);
}
