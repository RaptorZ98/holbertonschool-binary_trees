#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree usignpost-order traversal
 * @tree: the tree to go through
 * @func: the action to take in each node of the tree
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
