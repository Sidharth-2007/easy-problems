// Find the remainder when one number is divided by another.
#include <iostream>


int main() {
    using namespace std;
    int num1, num2, mod;
    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"Enter the second number:";
    cin>>num2;    
    mod=num1%num2;
    cout << "Remainder of " << num1 << "/"<< num2 << " is "<< mod;;
    
    return 0;
}
