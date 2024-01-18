#include <iostream>
#include <list>
using namespace std;

int main () {
    list<int> l;

    l.push_back(1);
    l.push_front(2); 
    l.push_front(3); 
    for(int i:l) {
        cout << i << " ";
    } 
    cout << endl;
    
    l.erase(l.begin());

    cout << "After erase" << endl;

    for(int i:l) {
        cout << i << " ";
    } 
    cout << endl;
}