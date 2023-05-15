#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: the parent node
 * @value: the value for the new node
 * Return: a pointer to the new node if all works, NULL if not
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *aux = NULL;

	if (parent == NULL)
		return (NULL);

	aux = binary_tree_node(parent, value);
	if (aux == NULL)
		return (NULL);
	parent->left = aux;
	return (aux);
}
