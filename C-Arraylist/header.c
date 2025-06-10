#include "header.h"


void dynamic_add(int** arr, int *cap) {

    *cap = ceil( *(cap) * 1.5);
    printf("capacity increased %d\n", cap);
    *arr = (int*) realloc (*arr, *(cap) * sizeof(int) );

}
void dynamic_deduce(int** arr, int *cap) {

    *(cap) = ceil( *(cap) * (3.0/4) );
    if ( *(cap) < 5) *cap = 5;
    printf("capacity decreased %d\n", cap);
    *arr = (int*) realloc (*arr, *(cap) * sizeof(int) );
}

void add(int** arr, int *size, int *cap, int val) {

    if (*(size) == *(cap) ) {
        dynamic_add(arr, cap);
    }

    *(arr)[ *(size)++ ] = val;
}
void remove(int** arr, int* size, int* cap, int val) {

    for (int i = 0; i < *(size); i++) {

        if (*(arr)[i] == val) {
            for (int j = i; j < *(size); j++) {
                *(arr)[j] = *(arr)[j+1];
            }
            *(size)--;
            break;
        }

    }

    if ( *(size) < *(cap) * 3.0/4) {
        dynamic_deduce(arr, cap);
    }

}

void print(int* arr, int *size, int *cap) {
    
    int i;
    for (i = 0; i < *(size); i++ ) {
        printf("%d ", arr[i]);
    }

    for (; i < *(cap); i++) {
        printf("? ");
    }

    printf("\n");
}
