#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
typedef struct Node { // to define Node thats the purpose of the keyword Node here
    int elem;
    struct Node* next; 
}Node;

typedef struct { // LinkedList implementation but could also be arraylist 
    Node* head;
    Node* tail;
}List; // this is irrelevant but id rather put this.

typedef struct {
    Node* top;
}Stack;

// for Stack (LIFO) Last in First Out // kong unsay last mao ang una mo gawas
void initialize(List* l, Stack* s);
void stackPush(List* l, Stack* s, int elem);
void stackTop(Stack* s);
void stackPop(List* l, Stack* s);