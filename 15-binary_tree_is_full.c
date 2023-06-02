#include "binary_trees.h"

/**
 * is_full_recursive - For checking if a binary tree is full recursively.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: returns 1 if the binary tree is full, or 0 otherwise.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
				(tree->left == NULL && tree->right != NULL) ||
				is_full_recursive(tree->left) == 0 ||
				is_full_recursive(tree->right) == 0)
			return (0);
	}
		return (1);
}

/**
 * binary_tree_is_full - For checking if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: returns 1 if the binary tree is full, or 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
