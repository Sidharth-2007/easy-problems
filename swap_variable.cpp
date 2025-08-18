//program to swap 2 variables
#include <iostream>
using namespace std;

int main() {
    int a,b,temp;
    cout << "Enter first number: " ;
    cin >> a;
    cout << "Enter second number: " ;
    cin >> b;
    cout << "Before Swapping  a = " << a << ", b = " << b << endl; // values before swaping 
    temp = a;
    a = b;
    b = temp;
    cout << "After Swapping  a = " << a << ", b = " << b ; 
    

    return 0;
}
