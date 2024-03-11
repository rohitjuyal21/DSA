#include <iostream>
using namespace std;

class F
{
    public:
    void func() {
        cout << "HEE" << endl;
    }

    void func (string name) {
        cout << name << endl;
    }

    int func (string name, int n) {
        cout << name << endl;
        return n;
    }

    void func(char name) {
        cout << "Dd";
    }

};

int main() {
    F obj;
}