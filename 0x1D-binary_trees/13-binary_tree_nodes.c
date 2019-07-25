#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts node with at least 1 child
 * @tree: tree pointer to the root node
 * Return: size_t for counting the nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);
	{
		if (tree->left && tree->right)
			return binary_tree_nodes(tree->left)
				+ binary_tree_nodes(tree->right) + 1;
		else
			return (1) + binary_tree_nodes(tree->left)
				+ binary_tree_nodes(tree->right);
	}
}
