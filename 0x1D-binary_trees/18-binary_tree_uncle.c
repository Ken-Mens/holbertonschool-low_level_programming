#include "binary_trees.h"
/**
 * binary_tree_uncle - finds uncle of node
 * @node: pointer to the node to find uncle of
 * Return: return NUll if node is null or if node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *fam;

	if (node == NULL || node->parent == NULL
			|| node->parent->parent == NULL)
		return (NULL);

	fam = node->parent;

	if (fam->parent && fam->parent->right != fam)
		return (fam->parent->right);
	if (fam->parent && fam->parent->left != fam)
		return (fam->parent->left);
	return (NULL);
}

