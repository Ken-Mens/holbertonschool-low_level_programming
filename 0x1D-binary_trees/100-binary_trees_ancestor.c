#include "binary_trees.h"
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
/**
 * binary_trees_ancestor - find the lowest common ancestor of 2 nodes
 * @first: first node pointer
 * @second: bsecond node pointer
 * Return: lowest common ancestor or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				const binary_tree_t *second)
{
		size_t uno, dos;

		if (first == NULL || second == NULL)
			return (NULL);

		uno = binary_tree_depth(first);
		dos = binary_tree_depth(second);

		if (first->parent == second->parent)
			return (first->parent);
		{
			if (uno > dos)
			first = first->parent;
			else
			if (uno < dos)
			second = second->parent;
			else
			{
				first = first->parent;
				second = second->parent;
			}
		return (binary_trees_ancestor(first, second));
		}
}
