#include <iostream>
using namespace std;

class A {
    public:
    void func() {
        cout << "Function A called" << endl;
    }
};

class B {
    public:
    void func() {
        cout << "Function B called" << endl;
    }
};

class C: public A, public B {

};

int main () {
    C obj;

    obj.A::func();
    obj.B::func();

    return 0;
}