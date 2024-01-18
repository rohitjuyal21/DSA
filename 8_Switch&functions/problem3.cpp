// Fibonacci sequence

#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int a = 0;
    int b = 1;
    int sum = 0;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++)
    {
        sum =  a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
}

int main()
{
    int n;
    cout << "Enter the value of n ";
    cin >> n;

    fibonacci(n);
}