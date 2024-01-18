#include <iostream>
using namespace std;

int main () {
    int a = 4;
    int b = 6;

    cout << "a & b " << (a&b) << endl;  // AND 
    cout << "a | b " << (a|b) << endl;  // OR
    cout << "~a " << ~a << endl;        // NOT
    cout << "a ^ b " << (a^b) << endl;  // XOR

    cout << "17 >> 1 " << (17>>1) <<endl;  // right shift
    cout << "17 >> 2 " << (17>>2) <<endl;  // right shift
    cout << "19 << 1 " << (19<<1) <<endl;  // left shift
    cout << "21 << 2 " << (21<<2) <<endl;  // left shift
    return 0;
}