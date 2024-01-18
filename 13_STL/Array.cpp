#include <iostream>
#include <array>
using namespace std;

int main () {

    array<int, 4> a = {1, 2, 3, 4};

    int size = a.size();

    cout << size << endl;

    for(int i = 0; i < size; i++) {
        cout << a[i]  << " ";
    }
    cout << endl;

    cout << "Element at 3rd index " << a.at(3) << endl;
    cout << "Empty or not " << a.empty() << endl;
    cout << "First Element " << a.front() << endl;
    cout << "Last Element " << a.back() << endl;
}