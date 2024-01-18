#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    cout << "What do you want to do?" << endl;
    cout << "+" << endl
         << "-" << endl
         << "*" << endl
         << "/" << endl
         << "%" << endl;

    char op;
    cout << "Enter the operation you want to perform: ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    case '%':
        cout << a % b;
        break;
    default:
        cout << "Enter a valid operation";
    }
}