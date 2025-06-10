#include "header.h"

int main() {
    
    LinkedList list;
    initialize(&list);

    char choice;
    int val, pos;

    // the following operations...
    
    do {
        printf("\n--- Linked List Operations ---\n");
        printf("[1] Insert at Head\n");
        printf("[2] Insert at Tail\n");
        printf("[3] Insert at Position\n");
        printf("[4] Remove Head\n");
        printf("[5] Remove Tail\n");
        printf("[6] Print List\n");
        printf("[x] Exit\n");
        printf("Enter choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                printf("Enter value to insert at head: ");
                scanf("%d", &val);

                insertLinkedList(&list, val);
                break;

            case '2':
                printf("Enter value to insert at tail: ");
                scanf("%d", &val);

                insertTail(&list, val);
                break;

            case '3':
                printf("Enter value: ");
                scanf("%d", &val);

                printf("Enter position (0 to %d): ", list.size);
                scanf("%d", &pos);

                insertAt(&list, val, pos);
                break;

            case '4':
                removeHead(&list);
                break;

            case '5':
                removeTail(&list);
                break;

            case '6':
                print(&list);
                break;

            case 'x':
            case 'X':
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid option. Try again.\n");
        }

    } while (tolower(choice) != 'x');

    return 0;
}
