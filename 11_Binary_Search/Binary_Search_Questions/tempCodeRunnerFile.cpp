#include <iostream>
using namespace std;

long long int findSqrt (int num) {
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

int main () {
    int num = 36;
    cout << "Square root of num is " << findSqrt(num);
}