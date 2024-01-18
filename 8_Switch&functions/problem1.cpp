// AP = ( 3 * n + 7)

#include <iostream> 
using namespace std;

int AP (int n) {
    return (3 * n + 7);
}

int main () {
    int n;
    cout << "Enter the value of n ";
    cin >> n;

    cout << AP(n) << endl;
    cout << AP(7) << endl;
    cout << AP(10) << endl;
    cout << AP(3) << endl;
    cout << AP(20) << endl;
}