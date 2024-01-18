#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
    // base case
    if (size == 0)
    {
        return 0;
    }

    return sum(arr, size-1)+ arr[size-1];
}

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int size = 6;
    cout << sum(arr, size);
}