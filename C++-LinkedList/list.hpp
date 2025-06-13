#include <iostream>
using namespace std;
class list {

    public:
    virtual void add(int elem) = 0;
    virtual void remove(int elem) = 0;
    virtual void print() = 0;

};