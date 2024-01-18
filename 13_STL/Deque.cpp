#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    //   for(int i : d) {
    //     cout << i << " ";
    //   } cout << endl;

    // d.pop_back();

    //   for(int i : d) {
    //     cout << i << " ";
    //   } cout << endl;

    //   d.push_front(4);
    //   d.pop_front();

    cout << "Elemet at 1st index " << d.at(1) << endl;

    cout << "Empty or not " << d.empty() << endl;
    cout << "First Element " << d.front() << endl;
    cout << "Last Element " << d.back() << endl;

    cout << "size before erase " << d.size() << endl;
    cout << "max size before erase " << d.max_size() << endl;

    d.erase(d.begin(), d.begin() + 1);

    cout << "size after erase " << d.size() << endl;
    cout << "max size after erase " << d.max_size() << endl;
} 