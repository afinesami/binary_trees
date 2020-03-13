#include "binary_trees.h"
/**
 * binary_tree_inorder - through a binary in-order traversal
 *
 * @tree: pointer to the root node
 * @func: pointer to a function
 * Return: binnary in order
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree != NULL && func != NULL)
{
if (tree->left != NULL)
binary_tree_inorder(tree->left, func);

func(tree->n);

if (tree->right != NULL)
binary_tree_inorder(tree->right, func);
}
}
