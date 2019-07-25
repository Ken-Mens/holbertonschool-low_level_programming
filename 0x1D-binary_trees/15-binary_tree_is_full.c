#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if binary tree is fullt
 * @tree: tree pointer to the root node
 * Return:0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left)
				&& binary_tree_is_full(tree->right));
	else
		return (0);
}
