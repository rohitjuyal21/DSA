#include <iostream>
using namespace std;

void reverseArray (int arr[], int size) {
    for(int i = 0; i < size; i+=2) {
        if(i+1 < size) {
            swap(arr[i], arr[i+1]);
        }
    }
    
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++ ) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main () {
    int arr[9] = {12, 23, 15, 2, 98, 45, 9, 17, 59};
    printArray(arr, 9);
    reverseArray(arr, 9);
    printArray(arr, 9);
    
}