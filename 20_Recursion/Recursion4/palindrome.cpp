#include <iostream>
using namespace std;

bool palindrome(string &str, int s, int e)
{
    // base case
    if (s > e)
    {
        return true;
    }

    if(str[s++] == str[e--]) {
        return palindrome(str, s, e);
    } 
    else {
        return false;
    }
}

int main()
{
    string str = "abccbba";
    if(palindrome(str, 0, str.length() - 1)) {
        cout << "String is a palindrome";
    } else {
        cout << "String is not a palindrome";
    }
}