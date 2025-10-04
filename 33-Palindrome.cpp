//palindrome or not
#include <iostream>

using namespace std;
int main(){
    int num1, a, rev = 0, temp;
    cout << "Enter the number: ";
    cin >> num1;
    temp = num1;
    while (num1 > 0){
        a = num1 % 10;
        rev = (rev * 10 ) + a;
        num1 = num1 / 10;
        
    }
    if (temp == rev){
        cout << rev <<" is a Palindrome"  ;
        }
    else {
        cout << "Not a Palindrome";
    }
}
