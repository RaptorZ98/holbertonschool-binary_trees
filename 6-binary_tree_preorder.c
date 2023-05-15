#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree usign pre-order traversal
 * @tree: the tree to go through
 * @func: the action to take in each node of the tree
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
