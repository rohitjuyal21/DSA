#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void pigeonSort(int arr[], int mini, int maxi)
{
    int range = maxi - mini + 1;

    int count[range] = {0};

    // fint the count
    for (int i = 0; i < range; i++)
    {
        int index = arr[i] - mini;
        count[index]++;
    }

    int index = 0;
    for (int i = 0; i < range; i++)
    {
        while (count[i] > 0)
        {
            arr[index] = i + mini;
            index++;
            count[i]--;
        }
    }
}

int main()
{
    int arr[] = { 8, 3, 2, 7, 4, 6, 8 };

    int n = 7;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }

    pigeonSort(arr, mini, maxi);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}