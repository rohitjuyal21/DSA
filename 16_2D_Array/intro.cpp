#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int key, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{

    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int key;
    cout << "Enter the element you want to search ";
    cin >> key;

    if (isPresent(arr, key, 3, 4))
    {
        cout << "Element is Present :)" << endl;
    }
    else
    {
        cout << "Element is absent :(" << endl;
    }
    return 0;
}
