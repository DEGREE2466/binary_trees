#include "binary_trees.h"

/**
 * binary_tree_sibling - For finding the sibling of a node in a binary tree.
 * @node: Pointer to the node to find the sibling of.
 *
 * Return: If node is NULL or there is no sibling - NULL.
 *          Otherwise - A pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

/**
 * binary_tree_uncle - For finding the uncle of a node in a binary tree.
 * @node: Returns a pointer to the node to find the uncle of.
 *
 * Return: If the node is NULL, and node has no parent, or there is no uncle - NULL.
 *          Otherwise - A pointer to the uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
