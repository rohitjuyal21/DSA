#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;


    // counting the elements smaller than pivot starting from s+1
    // As s we already selected as our pivot element
    // so the loop will run from s+1 to e
    for (int i = s+1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    // placing pivot at its right place
    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);

    // left and right part
    // in left part elements should be less than pivot
    // in right part elements should be greater than pivot
    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{

    // base case
    if (s >= e)
    {
        return;
    }

    // partition
    int p = partition(arr, s, e);

    // left part sort
    quickSort(arr, s, p - 1);
    // right part sort
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[10] = {10, 4, 8, 2, 8, 9, 1, 4, 6, 7};
    int n = 10;
    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}