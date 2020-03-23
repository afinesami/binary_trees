#include "binary_trees.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array
 *
 *@array: pointer to the first element of the array to be converted
 *@size: size of array
 *
 * Return: a pointer to the root node of the created BST, or NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
size_t cont = 0;
bst_t *root;

root = NULL;
for (cont = 0; cont < size; cont++)
bst_insert(&root, array[cont]);
return (root);
}
