#include <iostream>
using namespace std;

void pairSum (int arr[], int size, int sum) {
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] + arr[j] == sum) {
                cout << min(arr[i], arr[j]) << " " << max(arr[i], arr[j]);
                cout << endl;
            }
        }
    }
}

int main () {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 5;
    pairSum(arr, 5, 5);
}