#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 *@parent: pointer to parent of new node
 *@value: value to save in n
 *
 * Return: a pointer to the created node, or NULL
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
