#include <iostream>
using namespace std;

void sortArray(int arr[], int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return;
    }

    for(int i = 0; i < n - 1; i++) {
        if(arr[i]> arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }

    sortArray(arr, n - 1);
}

int main()
{
    int arr[6] = {4, 10, 2, 1, 223, 3};

    for(int i = 0; i< 6;i++) {
        cout << arr[i] << " ";
    } 

    cout << endl;

    cout << "Sorted Array " << endl;

    sortArray(arr, 6);

    for(int i = 0; i< 6;i++) {
        cout << arr[i] << " ";
    }
}