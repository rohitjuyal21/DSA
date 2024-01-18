#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void rotate(int arr[], int n, int k) {
    int temp[n];
    for(int i = 0; i < n; i++) {
        temp[(i+k) % n] = arr[i];
    }

    //copy temp into arr
    arr = temp;

    cout << "rotated ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main () {
   int arr[5] = {2, 5, 6, 8, 9};
   printArray(arr, 5);
   rotate(arr, 5, 3); 
   printArray(arr, 5);
}