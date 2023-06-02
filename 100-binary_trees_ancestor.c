#include "binary_trees.h"

/**
 * binary_trees_ancestor - For finding the lowest common ancestor of two nodes.
 * @first: A pointer to the first node.
 * @second: A pointer to the second node.
 *
 * Return: When no common ancestor, return NULL.
 *         Otherwise, Should return the common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);

	while (first)
	{
		const binary_tree_t *tmp = second;

		while (tmp)
		{
			if (first == tmp)
				return ((binary_tree_t *)first);
			tmp = tmp->parent;
		}
		first = first->parent;
	}

	return (NULL);
}
