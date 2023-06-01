#include "binary_trees.h"

/**
 * binary_tree_postorder - Performs binary tree postorder traversal
 * @tree: Pointer to the root node of the tree
 * @func: Pointer to a function to call for each of the node.
 *        The value in the node passed as a parameter to the function.
 *
 * Description: This function traverses the binary
 * tree using postorder traversal,
 *        which means the left subtree is processed first, followed by
 *        the right subtree, and then the current node.
 *
 * Return: Nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
