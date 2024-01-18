#include <iostream>
#include <algorithm>
using namespace std;


bool isPossible (int arr[], int size, int c, int mid) {
    int cowCount = 1;
    int lastPos = arr[0];

    for(int i = 1; i < size; i++) {
        if(arr[i] - lastPos >= mid) {
            cowCount++;
            lastPos = arr[i];
        }
            if(cowCount == c) {
                return true;
            }
    }
    return false;
}

int aggressiveCows(int arr[], int size, int c)
{
    std::sort(arr, arr + size);
    int start = 0;
    int maxi = -1;

    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
    }

    int end = maxi;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(arr, size, c, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int arr[5] = {4, 2, 1, 3, 6};
    int size = 5;
    int c = 2; // no. of cows

    cout << aggressiveCows(arr, size, c);
}