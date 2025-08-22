//Power of a number with loops
#include <iostream>
using namespace std;

int main() {
    int num, powr, ans = 1 ;
    cout << "Enter the number : " ;
    cin >> num ; // receives the base or number
    cout << "Enter the power of the number; " ;
    cin >> powr ;

    for (int i = 1; i <= powr; i++) {
        ans = ans * num ;
        
    }
    cout << num << " Raised to " << powr << " = " << ans ;
    return 0;
}