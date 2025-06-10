#include  "header.h"

// initialize -> initializes the values of the linked list
void initialize( LinkedList* list) {
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}

void insertLinkedList( LinkedList* list, int val) {
    
    if (!list->head) {
        list->head = ( Node*) malloc ( sizeof( Node) );
        list->head->elem = val;
        list->head->next = NULL;
        list->tail = list->head;
        list->size++;
        return;
    }
    
    // insert head
    Node* node = ( Node*) malloc ( sizeof( Node) );
    node->elem = val;
    node->next = list->head;
    list->head = node;
    list->size++;
    
}

void insertTail( LinkedList* list, int val) {
   
}

void insertAt( LinkedList* list, int val, int pos) {
    
}

void removeHead(LinkedList* list) {
    
    if (!list || !list->head) {
        printf("Empty list\n");
        return;
    }
    
    Node* temp = list->head;
    list->head = list->head->next;
    list->size--;
    free(temp);
    
    if (list->head == NULL) {
        list->tail = NULL;
    }
}

void removeTail( LinkedList* list) { 
    
}

void print( LinkedList* list) {
      
    Node* curr = list->head;
    
    while(curr != NULL) {
        
        printf("%d", curr->elem);
        
            if (curr != list->tail) {
                printf(" -> ");
            }
            
        curr = curr->next;
    }
    
    printf("\n");
    
}