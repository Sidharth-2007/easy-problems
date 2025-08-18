//program to find wether number is odd or even
#include <iostream>
using namespace std;

int main() {
    int num1 ;
    cout << "Enter a number: " ;
    cin >> num1;
    if ( num1 % 2 == 0 ) {
        cout << "Number is even " ;
        
    }
    else {
        cout << "Number is odd " ;
    }
    

    return 0;
}
