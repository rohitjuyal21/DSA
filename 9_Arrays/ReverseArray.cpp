#include <iostream>
using namespace std;

void reverseArray (int arr[], int size) {
    // for(int i = 0; i < size/2; i++) {
    //     int temp = arr[i];
    //     arr[i] = arr[size - 1 - i];
    //     arr[size - 1 - i] = temp;
    // }

    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++ ) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main () {
    int arr[10] = {12, 23, 15, 2, 98, 45, 9, 17, 59, 66};
    printArray(arr, 10);
    reverseArray(arr, 10);
    printArray(arr, 10);
    
}