#include <iostream>
using namespace std;


// tail recursion
// void printCount(int n)
// {

//     // base condition
//     if (n == 0)
//     {
//         return;
//     }

//     cout << n << " ";
     
//     // recursive relation
//     printCount(n - 1);
// }

// head recursion
void printCount(int n)
{

    // base condition
    if (n == 0)
    {
        return;
    }
    
    // recursive relation
    printCount(n - 1);

    cout << n << " ";
     
}

int main()
{
    int n;
    cout << "Enter a number " << endl;
    cin >> n;

    printCount(n);

    return 0;
}