#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the siblign of a node
 * @node: the node we need to look for the sibling
 * Return: the sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node != node->parent->left)
		return (node->parent->left);
	return (node->parent->right);
}
