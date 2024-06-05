#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0, 0 if NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* if node is NULL or its left and right child are not leaves*/
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	/* if node is a leaf or if its right and left child are NULL */
	return (1);
}
