#include "binary_trees.h"
/**
 * binary_tree_uncle - finds uncle of node
 * @node: node to find the uncle of
 * Return: Null else ptr to uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *fam = node->parent;

	if (node == NULL || node->parent == NULL
			|| node->parent->parent == NULL)
		return (NULL);

	if (fam->parent && fam->parent->right != fam)
		return (fam->parent->right);
	if (fam->parent && fam->parent->left != fam)
		return (fam->parent->left);
	return (NULL);
}

