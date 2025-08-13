//Calcuate simple intrest.
#include <iostream>
using namespace std;
int main() {
    float p,n,r,si;//defining variable
    cout<<"Enter the principal amount:";
    cin>>p;
    cout<<"Enter the Number of days in years: ";
    cin>>n;
    cout<<"Enter rate of interest:";
    cin>>r;
    si=(p*n*r)/100;//formula for simple intrest 
    cout<<"The simple intrest is :"<<si;
    
    return 0;
}