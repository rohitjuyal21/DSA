#include <iostream>
using namespace std;

int firstPosition (int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        } else if(arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;
    
}

int lastPosition (int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        } else if(arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;
    
}

int totalOccurence (int arr[], int size, int key) {
    int totalOccurence = lastPosition(arr, size, key) - firstPosition(arr, size, key) + 1;
    return totalOccurence;
}

int main () {
    int arr[8] = {6, 10, 10, 10, 10, 10, 10, 23};
    cout << "First position of 10 is at index " << firstPosition(arr, 8, 10) << endl;
    cout << "Last position of 10 is at index " << lastPosition(arr, 8, 10) << endl;
    cout << "Total no. of occurence " << totalOccurence(arr, 8, 10) << endl;
}