#include "binary_trees.h"
/**
 * binary_tree_preorder - this recursively proceeds through a `binary_tree_t`
 * binary tree using pre-order traversal
 * @tree: the root node of tree to traverse
 * @func: pointing to function to call for each node; value in the node is
 * passed as a parameter to `func`
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
