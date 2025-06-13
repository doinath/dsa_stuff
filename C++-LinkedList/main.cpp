#include "linkedlist.hpp"

int main() {

    linkedlist* l = new linkedlist();
    
    int elem;
    char op;

    do {

        cout << "OP: ";
        cin >> op;

            switch(op) {

                case 'a':
                cout << "enter elem: ";
                cin >> elem;

                l->add(elem);
                break;

                case 'r':

                cout << "enter elem to remove: ";
                cin >> elem;

                l->remove(elem);
                break;

                case 'p':

                l->print();
                break;

                case 'x':

                cout << "terminating program.." << endl;
                break;

                default:

                cout << "invalid" << endl;
            }

    } while(op != 'x');
}