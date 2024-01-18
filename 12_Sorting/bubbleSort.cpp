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

void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
                swapped = true;
        }
        if(swapped == false) {
            // already sorted
            break;
        }
    }
}

int main()
{
    int arr[6] = {10, 2, 49, 23, 12, 5};
    int n = 6;
    printArray(arr, n);
    bubbleSort(arr, n);
    printArray(arr, n);
}