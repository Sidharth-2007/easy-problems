// Check if a number is positive, negative, or zero.
#include <iostream>
using namespace std;

int main() {
    float num;//num variable is defined 
    cout<<"Enter the number:";
    cin>>num;
    if (num<0) {// condition for checking if negative
        cout<<"The Number is Negative";
    }
    else if(num>0) {// condition for checking if Positive
        cout<<"The number is Positive";

    }
    else {//else it would be 0
        cout<<"The number is zero";
    }
}
