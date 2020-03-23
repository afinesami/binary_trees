#include "binary_trees.h"
size_t binary_tree_size2(const binary_tree_t *tree);

/**
 * binary_tree_size2 - measures the size of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: size
 */

size_t binary_tree_size2(const binary_tree_t *tree)
{
  int cont1 = 0, cont2 = 0;

  if (tree == NULL)
    return (0);

  if (tree->left != NULL)
    {

      cont1 = binary_tree_size2(tree->left);
      cont1++;
    }

  if (tree->right != NULL)
    {

      cont2 = binary_tree_size2(tree->right);
      cont2++;
    }

  return (cont1 + cont2);
}

/**
 * binary_tree_size - measures the size of a binary tree
 *
 *@tree: pointer to tree
 *
 *Return: size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
  if (tree == NULL)
    return (0);

  return (binary_tree_size2(tree) + 1);
}
