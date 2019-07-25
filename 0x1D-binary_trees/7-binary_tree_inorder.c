#include "binary_trees.h"
/**
 * binary_tree_inorder - display tree in preorder fashion
 * @tree: tree pointer to root node
 * @func: pointer to a function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
