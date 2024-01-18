#include <iostream>
using namespace std;

char toLowerCase(char ch) {
    if(ch >= 'a' && ch <= 'z') {
        return ch;
    } else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isPalindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        if (toLowerCase(name[s]) != toLowerCase(name[e]))
        {
            return false;
        }
        else {
            s++; e--;
        }
    }

    return true;
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char string[20];

    cout << "Enter a String " << endl;
    cin >> string;

    int len = getLength(string);

    if (isPalindrome(string, len))
    {

        cout << "It is Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}