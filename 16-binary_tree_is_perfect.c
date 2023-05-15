#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: the tree to check
 * Return: 1 if perfect, 0 if not
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (binary_tree_is_full(tree) == 1
	&& (binary_tree_height(tree->left) == binary_tree_height(tree->right)))
		return (1);
	return (0);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: the tree to check
 * Return: 1 if it is full, 0 if not
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_is_full(tree->left) * binary_tree_is_full(tree->right));
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
