#include <iostream>
using namespace std;

int main () {
    int n, m;
    cin >> n >> m; // n = rows, m = columns

    int** arr = new int*[n]; // rows

    for(int i = 0; i < n; i++){ 
        arr[i] = new int[m];  //columns
    }

    // array created

    // taking input
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    // taking output
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory
    for(int i = 0; i < n;i++) {
        delete []arr[i];
    }

    delete []arr;

}