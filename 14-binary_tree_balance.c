#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the tree to measure
 * Return: the balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the tree to measure
 * Return: the height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (!tree->parent)
	{
		if (left >= right)
			return (left);
		return (right);
	}
	if (left >= right)
		return (left + 1);
	return (right + 1);
}
