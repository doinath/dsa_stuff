#include "list.hpp"
#include "node.hpp"

class linkedlist : public list {

    node* head;
    node* tail;
    int size;

    node* create_node(int elem) {
        node* n = new node;
        n->elem = elem;
        n->next = nullptr;
        size++;
        return n;
    }
    public:

    linkedlist() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

     void add(int elem) override {

        if (!head) {
            head = create_node(elem);
            tail = head;
            return;
        }

        node* n = create_node(elem);
        n->next = head;
        head = n;

     }

     void remove(int elem) override {

        if (!head) {
            cout << "list does not exist" << endl;
            return;
        } 

        node* curr = head;
        node* prev = nullptr;

        while (curr != nullptr) {
            
            if (curr->elem == elem) {
                break;
            }

            prev = curr;
            curr = curr->next;
        }

        if (curr == nullptr) {
            cout << "element not found" << endl;
            return;
        }

        if (curr == head) {
            head = curr->next;
        } else {
            prev->next = curr->next;
        }

        if (curr == tail) {
            tail = prev;
        }

        delete curr;
        size--;

     } 

     void print() override {
        node* curr = head;

        while (curr != nullptr) {

            cout << curr->elem;

            if (curr != tail) {
                cout << " -> ";
            } 

            curr = curr->next;
        }

        cout << endl;
     } 



};