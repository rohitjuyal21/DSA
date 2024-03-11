#include <iostream>
using namespace std;

class A {
    public: 
    void func1() {
        cout << "Inside A" << endl;
    }
};

class B: public A {
    public:
    void func2 () {
        cout << "Inside B" << endl;
    }
};

class C: public A {
    public:
    void func3 () {
        cout << "Inside C" << endl;
    }
};

int main () {
    C c;
    c.func1();

    B b;
    b.func1();
}
