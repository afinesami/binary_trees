#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a Binary Search Tree
 *
 *@tree: double pointer to the root node of the BST to insert the value
 *@value: value to store in the node to be inserted
 *
 * Return: a pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
if (tree == NULL || *tree == NULL)
return (*tree = binary_tree_node(NULL, value));
if ((*tree)->n == value)
return (NULL);
if ((*tree)->n > value)
{
if ((*tree)->left == NULL)
return (binary_tree_insert_left(*tree, value));
return (bst_insert(&((*tree)->left), value));
}
if ((*tree)->n < value)
{
if ((*tree)->right == NULL)
return (binary_tree_insert_right(*tree, value));
return (bst_insert(&((*tree)->right), value));
}
return (NULL);
}

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
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 *@parent: pointer to parent of the new node
 *@value: value to save in n
 *
 * Return: a pointer to the created node, or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *nodo;

if (parent == NULL)
return (NULL);

nodo = calloc(1, sizeof(binary_tree_t));
if (nodo == NULL)
return (NULL);
if (parent->right == NULL)
{
parent->right = nodo;
nodo->parent = parent;
nodo->n = value;
nodo->right = NULL;
nodo->left = NULL;
}
else
{
nodo->right = parent->right;
parent->right->parent = nodo;
parent->right = nodo;
nodo->n = value;
nodo->parent = parent;
nodo->left = NULL;
}
return (nodo);
}
