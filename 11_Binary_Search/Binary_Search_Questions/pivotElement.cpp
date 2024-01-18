#include <iostream>
using namespace std;

int getPivot (int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] >= arr[0]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return start;
}

int main () {
    int arr[5] = {3, 5, 10, 11, 2};

    cout << "Pivot is " << getPivot(arr, 5);
}