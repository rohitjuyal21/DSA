#include <iostream>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
}

void update(int *p)
{
    // p = p + 1;

    *p = *p + 1;
}

int getSum (int arr[], int n) {
    // int getSum (int *arr, int n) // also correct
    cout << "Size: " << sizeof(arr) << endl; // size of the pointer


    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    int value = 6;
    int *p = &value;

    print(p);

    // cout << "before " << p << endl;
    // update(p);
    // cout << "after " << p << endl;

    cout << "before " << *p << endl;
    update(p);
    cout << "after " << *p << endl;
    
    int arr[5] = {10, 23, 45, 22, 25};
    int sum = getSum(arr, 5);
    cout << "Sum " << sum << endl;

    return 0;
}