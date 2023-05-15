#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the left-child of another node
 * @parent: the parent node
 * @value: the value for the new node
 * Return: a pointer to the new node if all works, NULL if not
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *aux = NULL, *node = NULL;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	aux = parent->right;
	node->right = parent->right;
	if (aux != NULL)
		aux->parent = node;
	parent->right = node;
	return (node);
}
