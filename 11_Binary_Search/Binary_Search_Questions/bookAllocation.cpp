#include <iostream>
using namespace std;

bool isPossible(int arr[], int size, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < size; i++)
    {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        } else {
            studentCount++;
            if(studentCount > m || arr[i] > mid) {
                return false;
            }
        }
    }
    return true;
}

int allocateBooks(int arr[], int size, int m)
{
    int start = 0;
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    int end = sum;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(arr, size, m, mid))
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
    int arr[4] = {10, 20, 30, 40};
    int size = 4;
    int m = 2; // no. of students

    cout << allocateBooks(arr, size, m);
}