#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* create and allocate memory to new node */
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	/* if malloc fails, return NULL */
	if (new_node == NULL)
		return (NULL);

	/* assign value and parent to nee node */
	new_node->n = value;
	new_node->parent = parent;

	/* initialize the left amd right child to NULL */
	new_node->left = NULL;
	new_node->right = NULL;

	/* return pointer to new node */
	return (new_node);
}
