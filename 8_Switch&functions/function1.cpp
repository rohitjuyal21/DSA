#include <iostream>
using namespace std;

int power () {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    int ans = 1;
    for(int i = 1; i <= b; i++) {
        ans *=a; 
    }
    return ans;
}

int main () {
    cout << power() << endl;
    cout << power() << endl;
    return 0;
}