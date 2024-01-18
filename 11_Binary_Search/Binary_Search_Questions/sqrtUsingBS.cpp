#include <iostream>
using namespace std;

long long int intSqrt (int num) {
    int start = 0;
    int end = num;
    long long int ans = -1;

    while (start <= end) 
    {
        long long int mid = start + (end - start) / 2;
        long long int square = mid * mid;
        if ( square == num) {
            return mid;
        } else if(square > num) {
            end = mid - 1;
        } else {
            start = mid + 1;
            ans = mid;
        }
    }
    return ans;
    
}

double morePrecision(int num, int precision, int tempSol) {
 double factor = 1;
 double ans = tempSol;
 
 for(int i = 0; i < precision; i++) {
    factor /=10;
    for(double j = ans; j * j < num; j +=factor) {
        ans = j;
    }
 }

 return ans;
}

int main () {
    int num;
    cout << "Enter the number ";
    cin >> num; 
    int tempSol = intSqrt(num);
    cout << "Square root of num is " << morePrecision(num, 3, tempSol);
}