#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function to check if a binary tree is perfect
 * @tree: pointer to the rood node of tree to check
 * Return: Null = 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t lf = 0, rf = 0;

	if (tree == NULL)
		return (0);

	lf = binary_tree_size(tree->left);
	rf = binary_tree_size(tree->right);

	return (binary_tree_height(tree) && lf == rf ? 1 : 0);
}
/**
 * binary_tree_height - function to calculate height of tree
 * @tree: tree root
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = NULL, height_r = NULL;

	if (tree == NULL)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
/**
 * binary_tree_size - function to calculate the size
 * @tree: tree root
 * Return: size of tree else 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((binary_tree_size(tree->right) + 1) + binary_tree_size(tree->left));
}
