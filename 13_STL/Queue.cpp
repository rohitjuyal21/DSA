#include <iostream>
#include <queue>
using namespace std;

int main () {
   queue<string> q;
   q.push("Hi");
   q.push("What");
   q.push("Heloo");

    cout << "First element " << q.front() << endl;
    q.pop();
    cout << "First element " << q.front() << endl;

}