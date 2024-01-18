#include <iostream>
using namespace std;

void printArray (int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort (int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int minIdex = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIdex]) {
                minIdex = j;
            }
        }
        swap(arr[i], arr[minIdex]);
    }
}

int main () {
    int arr[6] = {10, 2, 49, 23, 12, 5};
    int n = 6;
    printArray(arr, n);
    selectionSort(arr, n);
    printArray(arr, n);
}