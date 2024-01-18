#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key)
{

// cout << start << endl  << end;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int getPivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

int main()
{
    int arr[5] = {7, 8, 1, 3, 5};
    int pivot = getPivot(arr, 5);
    int size = 5;
    int key = 8;

    if (arr[pivot] <= key && key <= arr[size - 1])
    {
        cout << binarySearch(arr, pivot, size - 1, key);
    }
    else
    {
        cout << binarySearch(arr, 0, pivot - 1, key);
    }
}