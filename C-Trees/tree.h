#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    
    int elem;
    struct node* parent;
    struct node** children;
    int numOfChild;
    
}node;

typedef struct {

    node* root;
    int size;
}tree;

// basic tree function
void initialize(tree* t);
void add_root(tree* t, node** myTree, int elem);
void add_child(tree* t, node* parent, int elem, node** tree);
void printTree(tree* t);

// helper functions
node* find_node(node* parent, int elem);
node* add_node(node* parent, int elem);