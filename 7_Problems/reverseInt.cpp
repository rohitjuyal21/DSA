#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int main () {
    int n;
    cout << "Enter a number you want to reverse ";
    cin >> n;

    int ans = 0;

    while (n)
    {
        int digit = n % 10;
        if((ans > INT_MAX/10) || (ans < INT_MIN/10)) {
            cout << 0;
            return 0;
        }
        ans = ans * 10 + digit;
        n = n / 10;
    }
    cout << ans;
}