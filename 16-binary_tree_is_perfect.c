#include "binary_trees.h"

/**
 * binary_tree_is_leaf - For checking if a node is a leaf.
 * @node: A pointer to the node.
 *
 * Return: returns 1 if the node is a leaf, or 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	{
		if (node->left == NULL && node->right == NULL)
			return (1);
		return (0);
	}
}

/**
 * calculate_height - For calculating the height of a binary tree.
 * @tree: Node that will represent the root when calculating the height.
 * @height: Calculates current height of the tree.
 *
 * Return: Returns the height of the tree.
 */
size_t calculate_height(const binary_tree_t *tree, size_t height)
{
	size_t left;
	size_t right;

	left = height;
	right = height;
	if (tree == NULL)
		return (0);
	left = left + calculate_height(tree->left, height);
	right = right + calculate_height(tree->right, height);

	if (left > right)
		return (left + 1);
	return (right + 1);
}

/**
 * binary_tree_height - For returning the height of a binary tree.
 * @tree: Node that will represent the root when calculating the height.
 *
 * Return: Returns the height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);
	height = 0;
	height = calculate_height(tree, height);
	return (height - 1);
}

/**
 * binary_tree_is_perfect - For checking if a binary tree is perfect.
 * @tree: The pointer to the root node of the tree.
 *
 * Return: returns 1 if the binary tree is perfect, or 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (tree == NULL)
		return (0);

	left = tree->left;
	right = tree->right;

	if (binary_tree_is_leaf(tree))
		return (1);

	if (left == NULL || right == NULL)
		return (0);

	if (binary_tree_height(left) == binary_tree_height(right))
	{
		if (binary_tree_is_perfect(left) && binary_tree_is_perfect(right))
			return (1);
	}
	return (0);
}
