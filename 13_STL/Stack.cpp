#include <iostream>
#include <stack>
using namespace std;

int main () {
    stack<string> s;
    s.push("Hey");
    s.push("Hi");
    s.push("Hello");
    cout << "Top element " << s.top() << endl;
    s.pop();
    cout << "Top element " << s.top() << endl;
}