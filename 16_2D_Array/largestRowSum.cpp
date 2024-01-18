#include <iostream>
#include <climits>
using namespace std;

int largestRowSum (int arr[][4], int row, int col) {
    int maxi = INT_MIN;
    int index = -1;

    for(int i = 0; i < row; i++) {
        int sum = 0;
        for(int j = 0; j < col; j++) {
            sum += arr[i][j];
        }

        if(sum > maxi) {
            maxi = sum;
            index = i;
        }
    }

    cout << "Maximum row sum is " << maxi << endl;

    return index;
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

    cout << "Printing the largest sum" << endl;

    int largestSum = largestRowSum(arr, 3, 4);

    cout << "Row with the maximum sum is " << largestSum;

    return 0;
}
