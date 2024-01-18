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

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j>=0)
        {
            if(arr[j] >  temp) {
                arr[j+1] = arr[j];
            } else {
                break;
            }

            j--;
        }
        arr[j+1] = temp;
        
    }
}

int main()
{
    int arr[6] = {10, 2, 49, 23, 12, 5};
    int n = 6;
    printArray(arr, n);
    insertionSort(arr, n);
    printArray(arr, n);
}