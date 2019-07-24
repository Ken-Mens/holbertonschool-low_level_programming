#include "binary_trees.h"
/**
 * binary_tree_insert_left - creates binary tree node
 * @value: value to put in new node
 * @parent: pointer to parent node
 * Return: pointer to new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *pt;
	binary_tree_t *leftchild;

	if (parent == NULL)
		return (NULL);

	pt = malloc(sizeof(binary_tree_t));
	if (pt == NULL)
		return (NULL);

	pt->n = value;
	pt->right = NULL;
	pt->parent = parent;

	leftchild = parent->left;
	if (leftchild)
	{
		pt->left = leftchild;
		pt->left->parent = pt;
	}
	else
		pt->left = NULL;
		parent->left = pt;

	return (pt);
}
