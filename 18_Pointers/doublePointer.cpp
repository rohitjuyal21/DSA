#include <iostream>
using namespace std;

void update(int **ptr2) {
    // ptr2 = ptr2 + 1;
    // change - NO

    // *ptr2 = *ptr2 + 1;
    // change - YES

    **ptr2 = **ptr2 + 1;
    // change - YES
}

int main()
{

    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;
    int ***ptr3 = &ptr2;

    cout << "i -> " << i << endl;
    cout << "*ptr -> " << *ptr << endl;
    cout << "**ptr2 -> " << **ptr2 << endl << endl;

    cout << "i -> " << &i << endl;
    cout << "ptr -> " << ptr << endl;
    cout << "*ptr2 -> " << *ptr2 << endl << endl;

    cout << "&ptr -> " << &ptr << endl;
    cout << "ptr2 -> " << ptr2 << endl;
    cout << "&ptr2 -> " << &ptr2 << endl << endl;
     
    cout << "ptr3 -> " << ptr3 << endl;
    cout << "*ptr3 -> " << *ptr3 << endl;
    cout << "**ptr3 -> " << **ptr3 << endl;
    cout << "***ptr3 -> " << ***ptr3 << endl;
    cout << "&ptr3 -> " << &ptr3 << endl << endl;

    cout << "<------- Calling Function ------->" << endl << endl;

    cout << "before " << i << endl;
    cout << "before " << ptr << endl;
    cout << "before " << ptr2 << endl;

    update(ptr2);

    cout << "after " << i << endl;
    cout << "after " << ptr << endl;
    cout << "after " << ptr2 << endl;



    return 0;
}