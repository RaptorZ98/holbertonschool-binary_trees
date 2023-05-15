#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: the parent node
 * @value: the value for the new node
 * Return: a pointer to the new node if all works, NULL if not
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);
	parent->left = binary_tree_node(parent->left, value);
	if (parent->left == NULL)
		return (NULL);
	return (parent->left);
}
