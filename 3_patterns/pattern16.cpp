#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        // spaces (First triangle)
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        // second triangle
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        // third triangle
        int start = i - 1;
        while (start)
        {
            cout << start;
            start--;
        }
        cout << endl;
        i++;
    }
    return 0;
}