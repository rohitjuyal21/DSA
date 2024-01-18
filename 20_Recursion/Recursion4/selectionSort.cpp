#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    if(n == 0 || n == 1) {
        return;
    }

    for(int i = 1; i < n; i++) {
        int minIndex = 0;
        if(arr[i] > arr[minIndex]) {
            minIndex = i;
        }
        swap(arr[i], arr[minIndex]);
    }

    selectionSort(arr+1, n-1);
}

int main () {
    int arr[] = {3, 5, 1, 2, 6, 7, 1};
    int n = 7;

    for(int i = 0; i< 6;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, n);

    for(int i = 0; i< 6;i++) {
        cout << arr[i] << " ";
    }
}