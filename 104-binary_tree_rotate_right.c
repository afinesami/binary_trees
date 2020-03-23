#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotate to the right
 *@tree: pointer to the tree
 * Return: the new root
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
binary_tree_t *tmp, *aux;

tmp = NULL;
if (tree == NULL || tree->left == NULL)
return (NULL);
if (tree->left->right != NULL)
tmp = tree->left->right;
aux = tree->left;
tree->left->right = tree;
tree->parent = tree->left;
tree->left->parent = NULL;
tree->left = tmp;
if (tmp != NULL)
tmp->parent = tree;
return (aux);
}
