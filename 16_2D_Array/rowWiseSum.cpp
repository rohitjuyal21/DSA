#include <iostream>
using namespace std;

// row wise sum
void printRowSum (int arr[][4], int row, int col) {
    for(int i = 0; i < row; i++) {
        int sum = 0;
        for(int j = 0; j < col; j++) {
            sum += arr[i][j];
        }

        cout << "Row " << i+1 << " sum is " << sum << endl;
    }
}

// column wise sum
void printColSum (int arr[][4], int row, int col) {
    for(int i = 0; i < col; i++) {
        int sum = 0;
        for(int j = 0; j < row; j++) {
            sum += arr[j][i];
        }

        cout << "Column " << i+1 << " sum is " << sum << endl;
    }
}


int main()
{

    int arr[3][4];

    cout << "Enter the elements" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing array

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Printing the sum" << endl;

    printRowSum(arr, 3, 4);
    printColSum(arr, 3, 4);

    return 0;
}
