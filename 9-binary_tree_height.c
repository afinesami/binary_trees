#include "binary_trees.h"
size_t binary_tree_height2(const binary_tree_t *tree);

/**
 * binary_tree_height2 - measures the height of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: height
 */

size_t binary_tree_height2(const binary_tree_t *tree)
{
int cont1 = 0, cont2 = 0;

if (tree == NULL)
return (0);

if (tree->left != NULL)
cont1 += binary_tree_height2(tree->left);

if (tree->right != NULL)
cont2 += binary_tree_height2(tree->right);

if (cont1 > cont2)
return (cont1 + 1);
return (cont2 + 1);
}

/**
 * binary_tree_height - measures the height of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return ((binary_tree_height2(tree)) - 1);
}
