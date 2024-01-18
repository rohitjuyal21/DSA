#include <iostream>
using namespace std;

bool search(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return 1;
        }
    }
    return 0;
}

int main () {
    int arr[10] = {12, 4, 19, 24, -34, -21, 29, 42, 86, 66};
    int key;
    cout << "Enter the number you want to search ";
    cin >> key;

    bool found = search(arr, 10, key);
    if(found) {
        cout << "Number is present" << endl;
    } else {
        cout << "Number is not present" << endl;
    }  
}