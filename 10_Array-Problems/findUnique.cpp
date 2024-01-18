// All elements appears twice but only one element appears once. Fint that element
// n = 2m+1 // odd length array
#include <iostream>
using namespace std;

void findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++) {
        (ans = ans ^ arr[i]);
    }

    cout << ans;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[9] = {12, 12, 15, 12, 12, 12, 12, 12, 12};
    printArray(arr, 9);
    // findUnique(arr, 9);
    findUnique(arr, 9);
}