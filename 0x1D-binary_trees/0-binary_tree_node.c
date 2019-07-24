#include "binary_trees.h"
/**
 * binary_tree_node - creates binary tree node
 * @value: value to put in new node
 * @parent: pointer to parent node
 * Return: pointer to new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *pt;

	pt = malloc(sizeof(binary_tree_t));
	if (pt == NULL)
		return (NULL);

	pt->parent = parent;
	pt->left = NULL;
	pt->right = NULL;
	pt->n = value;

	return (pt);
}
