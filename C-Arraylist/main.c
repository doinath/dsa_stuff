#include <stdio.h>

int main() {

    int *arr;
    int cap = 5, size = 0;
    int choice, val;

    do {
        printf("\n[1] Add\n[2] Remove\n[3] Print\n[0] Exit\nChoose: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to add: ");
                scanf("%d", &val);
                add(&arr, &size, &cap, val);
                break;
            case 2:
                printf("Enter value to remove: ");
                scanf("%d", &val);
                remove_val(&arr, &size, &cap, val);
                break;
            case 3:
                print(arr, &size, &cap);
                break;
            case 0:
                free(arr);
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 0);

}