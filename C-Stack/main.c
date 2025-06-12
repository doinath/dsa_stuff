#include "stack.h"

int main() {

    List l;
    Stack s;

    initialize(&l, &s); // initializes our head, tail and top;
    
    int val;
    char op;

    do {
        
        printf("push - p, pop - r, top - t\n");
        printf("op: ");
        scanf(" %c", &op);

            switch(op) {
                
                case 'p':

                    printf("enter elem to push: ");
                    scanf("%d", &val);

                    stackPush(&l, &s, val);
                break;

                case 'r':

                    stackPop(&l, &s);

                break;

                case 't':

                    stackTop(&s);

                break;

                case 'x':
                    printf("terminating program...");
                
                break;

                default:
                    printf("invalid op\n");
            }

    } while(op != 'x');

}