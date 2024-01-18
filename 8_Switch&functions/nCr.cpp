#include <iostream>
using namespace std;

int fact (int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int nCr (int n, int r) {
    int nCr;
    nCr = fact(n)/ (fact(r) * fact(n-r));
    return nCr;
}

int main () {
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    int ans = nCr(n, r);

    cout << "nCr is: " << ans; 
    
    return 0;
}