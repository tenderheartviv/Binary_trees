#include "binary_trees.h"
/**
 * max_size_t - this finds larger of two size_t values
 * @a: the first value to compare
 * @b: the second value to compare
 * Return: the larger size_t value, or value of both if equal
 */
size_t max_size_t(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}

/**
 * binary_tree_height - this measures the height of a binary tree
 * @tree: root node from which to measure, starting at 0
 * Return: the levels from root, or 0 if `tree` is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	return (1 + max_size_t(binary_tree_height(tree->left),
			       binary_tree_height(tree->right)));
}
