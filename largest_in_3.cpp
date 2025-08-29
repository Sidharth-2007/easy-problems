//Find Largest among 3 number
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the 1st Number: ";
    cin >> a;
    cout << "Enter the 2nd Number: ";
    cin >> b;
    cout << "Enter the 3rd Number: ";
    cin >> c;
    
    if (a > b and a > c  ) {
        cout << a << " is the largest";
        
    }
    else if (b > a and b > c  ) {
        cout << b << " is the largest";
        
    }
    else if (c > a and c > b ) {
        cout << c << " is the largest";
        
    }

    return 0;
}
