#include <iostream>
using namespace std;

int main()
{
    int num = 6;

    // Address of operator - &

    cout << "Address of num is " << &num << endl;

    int *ptr = &num;

    // num++;
    // *ptr++;

    cout << "ptr " << &*ptr << endl;

    cout << "Size of integer is " << sizeof(num) << endl;
    cout << "Size of ptr is " << sizeof(ptr) << endl;

    cout << num << endl;
    *ptr *= 2;

    cout << "ptr * 2 is " << num << endl;

    int *q = ptr;

    cout << ptr << " - " << q << endl;
    cout << *ptr << " - " << *q << endl;

    // important concept
    int i = 10;
    int *t = &i;
    cout << (*t)++ << endl;

    cout << ++i << endl;

    cout << t << endl;
    cout << i << endl;
    t = t + 1;
    cout << t << endl;
    cout << i << endl;

    return 0;
} 