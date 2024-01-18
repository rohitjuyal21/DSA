// Total number of set bits in a and b

#include <iostream>
using namespace std;

int calcSetBits(int n)
{
    int setBits = 0;
    while (n != 0)
    {
        setBits += (n & 1);
        n = n >> 1;
    }

    return setBits;
}

int totalSetBits(int a, int b)
{
    int totalSetBits = calcSetBits(a) + calcSetBits(b);
    return totalSetBits;
}

int main()
{
    int a, b;
    cout << "Enter first number ";
    cin >> a;
    cout << "Enter second number ";
    cin >> b;

    cout << totalSetBits(a, b) << endl;
}