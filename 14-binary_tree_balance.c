#include "binary_trees.h"

#define MAX(a, b) ((a) >= (b) ? (a) : (b))

/**
 * max_nodes - To return the max number of linear nodes in a given binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: Returns the maximum number of linear nodes.
 */
size_t max_nodes(const binary_tree_t *tree)
{
	size_t left_m, right_m;

	if (!tree)
		return (0);

	left_m = max_nodes(tree->left);
	right_m = max_nodes(tree->right);

	return (MAX(left_m, right_m) + 1);
}

/**
 * binary_tree_height - For measuring the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: Returns the height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (max_nodes(tree));
}

/**
 * binary_tree_balance - For measuring the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: Returns the balance factor of the binary tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
