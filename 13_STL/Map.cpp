#include <iostream>
#include <map>
using namespace std;
 
int main () {
    map<int,string> m;
    
    m[1] = "HI";
    m[4] = "HEY";
    m[10] = "HELLO";

    m.insert({12, "HOW"});

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    
}