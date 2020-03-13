#include "binary_trees.h"

/**
 * binary_tree_delete - function deletes an entire binary tree
 * @tree: pointer to the root node of the tree
 * Return: deletes an entire binary tree 
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
return;
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
