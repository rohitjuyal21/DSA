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

class D: public B, public C {
    public:
    void func4() {
        cout << "Inside D" << endl;
    }
};

int main () {
    D object1;

    object1.func2();
    object1.func3();
    object1.func4();
}
