#include "binary_trees.h"

/**
 * binary_tree_node - create a node
 *
 *@parent: pointer to parent
 *@value: value
 *
 * Return: pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *nodo;

if (parent == NULL)
return (NULL);

nodo = calloc(1, sizeof(binary_tree_t));
if (nodo == NULL)
return (NULL);
if (parent->left == NULL)
{
parent->left = nodo;
nodo->parent = parent;
nodo->n = value;
nodo->right = NULL;
nodo->left = NULL;
}
else
{
nodo->left = parent->left;
parent->left->parent = nodo;
parent->left = nodo;
nodo->n = value;
nodo->parent = parent;
nodo->right = NULL;
}
return (nodo);
}
