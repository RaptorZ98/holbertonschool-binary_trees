#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: the node to find the uncle from
 * Return: the uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *aux;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	aux = node->parent;
	if (aux != aux->parent->left)
		return (aux->parent->left);
	return (aux->parent->right);
}
