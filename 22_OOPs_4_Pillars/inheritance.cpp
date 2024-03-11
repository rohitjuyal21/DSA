#include <iostream>
using namespace std;

class Human
{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge () {
        return this->age;
    }

    void setWeight (int w) {
        this->weight = w;
    }
};

class Male: private Human {
    public:
    string color;

    void setHeight (int h) {
        this->height = h;
    }

    void sleep () {
        cout << "Male sleeping" << endl;
    }

    int getHeight () {
        return this->height;
    }
};

int main()
{

    Male object1;
    // cout << object1.age << endl;
    // cout << object1.height << endl;
    // cout << object1.weight << endl;
    // cout << object1.getAge() << endl;

    // object1.setWeight(45);

    object1.sleep();
    object1.setHeight(40);
    cout << object1.getHeight() << endl;
    // cout << object1.weight << endl;


    return 0;
}