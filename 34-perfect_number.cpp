
#include <iostream>

using namespace std;
int main(){
    int num1, a, sum = 0;
    cout << "Enter the Number: ";
    cin >> num1;
    for (a = 1 ; a < num1; a++){
        if (num1 % a == 0){
            sum += a;
        }
    }
    if (sum == num1){
        cout << "A perfect number";
    
    }
    else {
        cout << "Not a perfect number";
        
    }
}
