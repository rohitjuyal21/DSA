// 1234
//  234
//   34
//    4 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }

        int count = i;
        int j = 1;
        while (j <= (n-i+1))
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        i++; 
    }

    return 0;
    
}