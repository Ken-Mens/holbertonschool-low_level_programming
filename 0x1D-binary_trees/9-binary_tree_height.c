#include "binary_trees.h"
/**
 * binary_tree_height - function that measures height of binary tree
 * @tree: tree pointer to the root node
 * Return: size_t for height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || ((tree->left) == NULL && (tree->right) == NULL))
		return (0);
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);

	if (right > left)
	{
		return (left + 1);
	}
	else
		return (right + 1);
}
