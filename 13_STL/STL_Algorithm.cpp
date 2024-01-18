#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {
    vector<int> v;
    
    v.push_back(1);
    v.push_back(4);
    v.push_back(9);
    v.push_back(13);

    for(int i:v) {
        cout << i << " ";
    } cout << endl;

    cout << "Finding 1 " << binary_search(v.begin(), v.end(), 1) << endl; // it will return true or false ( 1 or 0)
    cout << "Lower Bound " << lower_bound(v.begin(), v.end(), 9) - v.begin() << endl;
    cout << "Upper Bound " << upper_bound(v.begin(), v.end(), 9) - v.begin() << endl;

    rotate(v.begin(), v.begin() + 1, v.end());

    for(int i:v) {
        cout << i << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());

    for(int i:v) {
        cout << i << " ";
    }
    cout << endl;
}