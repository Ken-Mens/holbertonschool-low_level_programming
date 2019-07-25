#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_depth - function that finds depth of binary tree
 * @tree: tree is a pointer to the root node
 * Return: size_t for height
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);

	for (; tree && tree->parent; n++)
		tree = tree->parent;
	return (n);
}

