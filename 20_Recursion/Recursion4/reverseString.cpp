#include <iostream>
using namespace std;

void reverse(string &str, int start)
{
    // base case
    if (start > str.length() - start - 1)
    {
        return;
    }

    swap(str[start], str[str.length() - start - 1]);
    start++;

    // recursive call
    return reverse(str, start);
}

int main()
{
    string str;
    cin >> str;
    int start = 0;
    int end = str.length() - 1;
    reverse(str, 0);
    cout << str;
}