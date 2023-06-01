#include "binary_trees.h"

/**
 * binary_tree_preorder - Uses pre-order traversal to traverse the binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function for each node.
 *        The value in the node is passed as a parameter to the function.
 *
 *        Description: In pre-order traversal, the current node is processed
 *                     before its children (left and right).
 *
 *                     Return: Nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
