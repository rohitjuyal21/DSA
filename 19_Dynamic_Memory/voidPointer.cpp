#include <iostream>
using namespace std;

int main()
{
    float num = 10.2;
    void *ptr;
    ptr = &num;

    cout << &num << endl;
    cout << ptr << endl;
    cout << num << endl;
    // use type casting to print pointer content
    cout << *(static_cast<float *>(ptr));

    return 0;
}