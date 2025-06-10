#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

// think of linked list like struct -> struct

typedef struct Node {
    int elem;
    struct Node* next;
} Node;

typedef struct {
    struct Node* head;
    struct Node* tail;
    int size;
} LinkedList;


void initialize( LinkedList* list);
void insertLinkedList( LinkedList* list, int val);
void print( LinkedList* list);
void removeHead( LinkedList* list);

/*
    Below are the things you should implement to learn.
    I will not be providing the code. 

*/

void insertTail( LinkedList* list, int val);
void insertAt( LinkedList* list, int val, int pos);
void removeTail( LinkedList* list);
/* 
    * removeAll
    * mergeTwoLinkedList
    * sortLinkedList
*/
