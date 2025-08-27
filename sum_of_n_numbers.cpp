//print sum of n natural number 
#include <iostream>
using namespace std;

int main() {
    int sum = 0, n ;
    cout << "Enter the number of terms (n): " ;
    cin >> n ;
    
    for (int i = 0; i <= n ; i++) {
        sum = sum + i;
        
    }
    cout << "Sum of "<< n << " natural number = "<< sum ;
    
    return 0;
}
