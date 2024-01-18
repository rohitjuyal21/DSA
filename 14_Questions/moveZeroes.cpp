#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void moveZeroes(int arr[], int n)
{
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[7] = {2, 1, 0 , 2, 0, 0, 1};
    printArray(arr, 7);
    moveZeroes(arr, 7);
    printArray(arr, 7);
}