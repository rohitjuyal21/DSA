#include <iostream>
using namespace std;

int power (int n ) {

    // base condition
    if(n == 0) {
        return 1;
    }

    //recursive relation
    return 2 * power(n-1);
}
int main () {
    int n;
    cout << "Enter a number " << endl;
    cin >> n;

    cout << power(n);

    return 0;
}