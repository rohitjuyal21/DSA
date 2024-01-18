// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        // First method 

        // We take 4 triangles 

        // First triangle
        // int j = 1;
        // while(j <= (n-i+1)) {
        //     cout << j;
        //     j++;
        // }

        // // Second triangle
        // int star1 = i - 1;
        // while (star1)
        // {
        //     cout << "*";
        //     star1--;
        // }
        
        // // Third triangle
        // int star2 = i - 1;
        // while (star2)
        // {
        //     cout << "*";
        //     star2--;
        // }

        // // Fourth triangle
        // int k = 1;
        // int startnum = n - i + 1;
        // while (k <= (n-i+1))
        // {
        //     cout<< startnum;
        //     startnum--;
        //     k++;
        // }



        // second method;

        // first triangle
        int j = 1;
        while (j <= (n-i+1))
        {
            cout << j;
            j++;
        }

        // second triangle
        int star = 1;
        while (star <= (i-1) * 2) 
        {
           cout << "*";
           star++;
        }

        // third triangle;
        int k = 1;
        int startnum = n - i + 1;
        while (k <= (n-i+1))
        {
            cout << startnum;
            startnum--;
            k++;
        }    
        
        cout << endl;
        i++; 
    }

    return 0;
    
}