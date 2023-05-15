#include "binary_trees.h"

/**
 * binary_tree_node - creates a node of a binary tree
 * @parent: a pointer to the parten of the node to be created
 * @value: the value to add to the new node
 * Return: a pointer to the new node in succes, NULL if not
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	return (newNode);
}
