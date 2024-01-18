#include <iostream>
using namespace std;

int main()
{
    int price = 1330;
    int notes100, notes50, notes20, nores1;
    switch (1)
    {
    case 1:
        notes100 = price / 100;
        price = price % 100;
        cout << "100 Rs Notes " << notes100 << endl;;
    case 2:
        notes100 = price / 50;
        price = price % 50;
        cout << "50 Rs Notes " << notes100 << endl;
    case 3:
        notes100 = price / 20;
        price = price % 20;
        cout << "20 Rs Notes " << notes100 << endl;
    case 4:
        notes100 = price / 1;
        price = price % 1;
        cout << "1 Rs Notes " << notes100 << endl;
        break;
    }
}
