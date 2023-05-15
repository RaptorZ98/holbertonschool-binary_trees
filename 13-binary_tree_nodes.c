#include "binary_trees.h"

/**
 * binary_tree_nodes - count the nodes that have at least one child
 * @tree: the tree to count the nodes from
 * Return: the number of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		return (1);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
