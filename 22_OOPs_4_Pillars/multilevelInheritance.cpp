#include <iostream>
using namespace std;

class Animal {
    public:
    int age;
    int weight;

    public: 
    void speak() {
        cout << "Speaking" << endl;
    }
};

class Dog: public Animal {
    public:
    void bark () {
        cout << "Barking" << endl;
    }
};

class BabyDog: public Dog {
    public:
    void weep () {
        cout << "Weeping" << endl;
    }
};

int main () {
    BabyDog d;
    d.speak();
    d.bark();
    d.weep();
    return 0;
}
