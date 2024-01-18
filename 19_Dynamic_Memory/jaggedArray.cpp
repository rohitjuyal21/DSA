#include <iostream>
using namespace std;

int main()
{
    int row, col;
    row = 3;

    int **arr = new int *[row];

    int colsize[3] = {3, 2, 5};

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[colsize[i]];
    }

    // input value
    cout << "Enter the values " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colsize[i]; j++)
        {
            cin >> arr[i][j];
        }
    }

    // output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colsize[i]; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}