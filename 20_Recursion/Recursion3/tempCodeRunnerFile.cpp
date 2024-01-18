#include <iostream>
using namespace std;

bool isSorted(int *arr, int size)
{
    // base case
    if (size == 0 || size == 1)
    {
        return true;
    }

    if(arr[0] > arr[1]) {
        return false;
    } else {
        return isSorted(arr+1, size - 1);
    }
}

int main()
{
    int arr[6] = {2, 4, 6, 7, 10, 14};
    int size = 6;

    if(isSorted(arr, size)) {
        cout << "Array is sorted " << endl;
    } else {
        cout << "Array is not sorted";
    }

    return 0;
}