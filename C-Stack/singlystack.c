#include "stack.h"

/*
    i personally made this stack implementation so there is probably a better way
    to do this.
*/

void initialize(List* l, Stack* s) {
    l->head = NULL;
    l->tail = NULL;
    s->top = NULL;
}

void stackPush(List* l, Stack* s, int elem) {

    if (!l->head) {
        l->head = (Node*)malloc(sizeof(Node));
        l->head->elem = elem;
        l->head->next = NULL;
        s->top = l->head;
        return;
    }

    Node* n = (Node*)malloc(sizeof(Node));
    n->elem = elem;
    n->next = l->head;
    l->head = s->top = n;
}

void stackPop(List* l, Stack* s) { // removes head

    if (!l || !l->head) {
        return;
    }

    Node* temp = l->head;
    l->head = l->head->next;
    s->top = l->head;

    if (temp == l->tail) {
        l->tail = NULL;
    }

    free(temp);
    
}
void stackTop(Stack* s) {
    printf("%d\n", s->top->elem);
}
