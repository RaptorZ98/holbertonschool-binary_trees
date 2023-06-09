#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree usign pre-order traversal
 * @tree: the tree to go through
 * @func: the action to take in each node of the tree
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
