//Celsius to Fahrenheit conversion
#include <iostream>
using namespace std;

int main() {
    float f,c;// variable is defined
    cout<<"Enter temperature in °C: ";
    cin>>c;
    f=(c * 9/5) + 32;//formula for conversion
    cout<<"Temperature in °F:"<<f;
    return 0;
    


}
