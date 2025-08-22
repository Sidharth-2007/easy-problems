//Calculate the power using exponent function.

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int powr, num, ans ;
    cout << "Enter the number : " ;
    cin >> num ; // receives the base or number
    cout << "Enter the power of the number; " ;
    cin >> powr ;
    ans = pow( num, powr);
    cout << num << " Raised to " << powr << " = " << ans ;
    
    return 0;


}