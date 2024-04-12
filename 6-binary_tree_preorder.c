#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		/* visit root node */
		func(tree->n);

		/* using recursion visit all nodes in the left subtree */
		binary_tree_preorder(tree->left, func);

		/* using recursion, visit all nodes in the right subtree */
		binary_tree_preorder(tree->right, func);
	}
}
