#include "tree.h"

int main() {
    tree t;
    initialize(&t);

    int elem, par, size = 1; // index
    // not dynamic.
    node* myTree[100];
    
    char op;

    do {

        printf("addroot - a, addchild - c, print - p, exit - x\n");
        printf("op: ");
        scanf(" %c", &op);

            switch (op) {

                case 'a':
                printf("enter elem: ");
                scanf("%d", &elem);
                add_root(&t, myTree, elem);
                break;

                case 'c':
                printf("enter parent index (NOT element): ");
                scanf("%d", &par);
                printf("enter child element: ");
                scanf("%d", &elem);
                add_child(&t, myTree[par], elem, &myTree[size++]); // since we are dealing with double ptr u add & even if an array is ptr itself because we are pointing to multiple nodes hence ptr for the array then ptr to its nodes.
                break;

                case 'p':
                printTree(&t);
                break;

                case 'x':
                printf("exiting program...");
                break;

                default:
                printf("invalid\n");
            }

    } while (op != 'x');


    initialize(&t);


}