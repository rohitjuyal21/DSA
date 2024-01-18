#include <iostream>
using namespace std;

void printArray (int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main () {
    int arr1[10] = {12, 3, 6, 7};
    printArray(arr1, 10);

    int arr2[15] = {};
    printArray(arr2, 15);

    int arr3[5] = {0};
    printArray(arr3, 5);

    int arr4[8] = {1};
    printArray(arr4, 8);
    int arr4Size = sizeof(arr4) / sizeof(int);
    cout << "Size of arr5 is " << arr4Size << endl;

    int arr5[30];
    fill_n(arr5, 30, 1); // to fill entire array with 1 or any value you want
    printArray(arr5, 30);

    int arr5Size = sizeof(arr5) / sizeof(int);
    cout << "Size of arr5 is " << arr5Size << endl;

}