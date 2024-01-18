// Array is in non descending order

#include <iostream>
#include <limits.h>
using namespace std;

void findIntersection(int arr1[], int size1, int arr2[], int size2)
{
    // int storedVal = 0;
    // for (int i = 0; i < size1; i++)
    // {
    //     for (int j = 0; j < size2; j++)
    //     {
    //         if (arr1[i] == arr2[j])
    //         {
    //             cout << arr1[i] << " ";
    //             arr2[j] = INT_MIN;
    //             break;
    //         }
    //     }
    // }

    int i = 0, j = 0;

    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
}

int main()
{
    int arr1[6] = {1, 2, 3, 3, 4};
    int arr2[4] = {2, 3, 4};
    findIntersection(arr1, 5, arr2, 3);
}