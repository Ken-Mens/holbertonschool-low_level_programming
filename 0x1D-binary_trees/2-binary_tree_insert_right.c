#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right child of another
 * @value: value to put in new node
 * @parent: pointer to parent node
 * Return: pointer to new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *pt;
	binary_tree_t *rightchild;

	if (parent == NULL)
		return (NULL);

	pt = malloc(sizeof(binary_tree_t));
	if (pt == NULL)
		return (NULL);

	pt->n = value;
	pt->right = NULL;
	pt->left = NULL;
	pt->parent = parent;

	rightchild = parent->right;
	if (rightchild)
	{
		pt->right = rightchild;
		pt->right->parent = pt;
	}
	else
		pt->right = NULL;
		parent->right = pt;

	return (pt);
}
