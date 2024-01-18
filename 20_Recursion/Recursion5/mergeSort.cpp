#include <iostream>
#include <vector>
using namespace std;

void merge(int *arr, int start, int mid, int end) {
    vector<int> temp;

    int i = start;
    int j = mid+1;

    while(i <= mid && j <= end) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j<=end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for(int i = start; i <= end; i++) {
        arr[i] = temp[i - start];
    }
    
    
}

void mergeSort(int *arr, int start, int end) {
    // base case
    if(start >= end) {
        return;
    }

    int mid = start + (end - start) / 2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);

    merge(arr, start, mid, end);
}

int main () {
    int arr[8] = {2, 1, 4, 3, 7, 1, 5, 8};
    int n = 8;

    mergeSort(arr, 0, n - 1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}