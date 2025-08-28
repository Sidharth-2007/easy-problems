// To check wether a number is divisible by 5 and 11
#include <iostream>
using namespace std;
int main() {
    int num ;
    cout << "Enter the Number: " ;
    cin >> num ;
    if  ( num % 5 == 0 and num % 11 == 0) {
        cout << num << " is divisible by 11 and 5" ;
        
    }
    else {
        cout << num << " is not divisible by 11 and 5" ;
        
    }
}
