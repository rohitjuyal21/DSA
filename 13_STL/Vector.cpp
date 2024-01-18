#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> a(5, 1); // 5 is the size and the value of each element is 1

    cout << "Printing a" << endl;

    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> last(a);

    cout << "Printing last" << endl;

    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;


    cout << "Capacity " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity " << v.capacity() << endl;

    cout << "Size " << v.size() << endl;

    cout << "Element at 1st index " << v.at(1) << endl;

    cout << "First element " << v.front() << endl;

    cout << "Last element " << v.back() << endl;

    for (int a : v)
    {
        cout << a << " ";
    }

    cout << endl;

    v.pop_back();

    for (int a : v)
    {
        cout << a << " ";
    }
    cout << endl;

    cout << "Size before clear " << v.size() << endl;
    cout << "Capacity before clear " << v.capacity() << endl;
    v.clear();
    cout << "Size after clear " << v.size() << endl;
    cout << "Capacity after clear " << v.capacity() << endl;
}