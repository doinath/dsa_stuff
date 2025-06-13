#include "tree.h"

void initialize(tree* t) {
    t->root = NULL;
    t->size = 0;
}

void add_root(tree* t, node** myTree, int elem) {

    if (!t->root) {
        t->root = (node*)malloc(sizeof(node));
        t->root->elem = elem;
        t->root->parent = NULL;
        t->root->children = (node**)malloc(0);
        t->root->numOfChild = 0;
        myTree[0] = t->root;
        t->size++;
        return;
    }

    printf("root already exists.\n");
    return;
}

void add_child(tree* t, node* parent, int elem, node** tree) {

    if (!t->root) {
        printf("no root added.\n");
        return;
    } 

    node* child = (node*)malloc(sizeof(node));
    child->parent = parent;
    child->elem = elem;
    child->children = (node**)malloc(0);
    child->numOfChild = 0;

    parent->numOfChild++;
    parent->children = (node**)realloc(parent->children, sizeof(node) * parent->numOfChild );
    parent->children[parent->numOfChild - 1] = child;

    *tree = child;

    t->size++;

}

void print(char* s, node* c) {
    if (c == NULL) return;

    printf("%s", s);

    if (c->parent == NULL) {
        printf("+-->: %d (root)\n", c->elem);
    } else {
        printf("+-->: %d parent(%d)\n", c->elem, c->parent->elem);
    }
    
    for (int i = 0; i < c->numOfChild; i++) {
        print("|\t", c->children[i]);
    }
}

void printTree(tree* t) {
    if (t == NULL || t->root == NULL) {
        printf("empty\n");
        return;
    }

    print("", t->root);
    printf("\n");
    
}
