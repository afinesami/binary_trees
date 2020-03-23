#include "binary_trees.h"

/**
 *binary_tree_rotate_left - rotate to the left
 *@tree: pointer to the tree
 *Return: the new root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *tmp, *aux;

tmp = NULL;
if (tree == NULL || tree->right == NULL)
return (NULL);
if (tree->right->left != NULL)
tmp = tree->right->left;
aux = tree->right;
tree->right->left = tree;
tree->parent = tree->right;
tree->right->parent = NULL;
tree->right = tmp;
if (tmp != NULL)
tmp->parent = tree;
return (aux);
}
