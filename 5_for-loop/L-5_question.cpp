// Given an integer number n, return the difference between the product of its digits and the sum of its digits

#include <iostream>
using namespace std;

int main () {
    int n = 234;

    int product = 1;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        product *= digit;
        sum += digit;
        n /= 10;
    }
    cout << product - sum;
    
}