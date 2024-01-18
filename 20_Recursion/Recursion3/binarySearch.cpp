#include <iostream>
using namespace std;

bool binarySearch(int *arr, int start, int end, int key)
{
    // base case
    if (start > end)
    {
        return false;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == key)
    {
        return true;
    }
    else if (arr[mid] > key)
    {
        return binarySearch(arr, start, mid - 1, key);
    }
    else
    {
        return binarySearch(arr, mid + 1, end, key);
    }

    return -1;
}

int main()
{
    int arr[6] = {2, 4, 6, 7, 10, 14};
    int key = 2;
    int start = 0;
    int end = 5;

    if (binarySearch(arr, start, end, key))
    {
        cout << "Element is present" << endl;
    }
    else
    {
        cout << "Element is absent";
    }

    return 0;
}