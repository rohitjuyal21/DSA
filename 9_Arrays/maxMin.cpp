#include <iostream>
#include <limits.h>
using namespace std;

int getMin (int arr[], int size) {
    int minNum = INT_MAX;
    for(int i = 0; i < size; i++) {
        minNum = min(minNum, arr[i]); // predefined functions
        // if(arr[i] < minNum) {
        //     minNum = arr[i];
        // }
    }
    return minNum;
}

int getMax (int arr[], int size) {
    int maxNum = INT_MIN;
    for(int i = 0; i < size; i++) {
        maxNum = max(maxNum, arr[i]);
        // if(arr[i] > maxNum) {
        //     maxNum = arr[i];
        // }
    }
    return maxNum;
}

int main () {
    int size;
    cin >> size;
    int arr[100];

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Minimum value is " << getMin(arr, size) << endl;
    cout << "Maximum value is " << getMax(arr, size) << endl;
   
}