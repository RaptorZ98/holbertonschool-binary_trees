#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: the tree to measure
 * Return: the depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dep = 0;
	binary_tree_t *aux = tree;

	if (!tree)
		return (0);
	while (aux->parent)
	{
		aux = aux->parent;
		dep++;
	}
	return (dep);
}
