#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // for(int i = 1; i <= n; i++)
    // {
    //     cout << i << endl;
    // }

    // int i = 1;
    // for(; ;) {
    //     if(i <= n) {
    //         cout << i << endl;
    //     } else {
    //         break;
    //     }
    //     i++;
    // }

    // We can add as many conditions or updations we want
    // for(int a = 0, b = 1, c = 4; a>=0 && b>=1 && c>=0; a--, b--, c--) {
    //     cout << a << " " << b << " " << c;
    // }

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}
