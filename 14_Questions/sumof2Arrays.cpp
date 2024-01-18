#include <iostream>
using namespace std;

void sum(int arr1[], int n, int arr2[], int m)
{
    int i = n - 1;
    int j = m - 1;
    int ans[4];
    int k = 0;

    int carry = 0;

    while (i <= 0 && j <= 0)
    {
        int val1 = arr1[i];
        int val2 = arr2[j];

        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;

        ans[k++] = sum;
    }

    for(int i = 0; i < 4; i++) {
        cout << ans[i] << " ";
    }
}

int main()
{
    int arr1[3] = {1, 2, 9};
    int arr2[2] = {2, 4};

    sum(arr1, 3, arr2, 2);
}