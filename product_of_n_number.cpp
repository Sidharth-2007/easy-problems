//print product of n natural number 
#include <iostream>
using namespace std;

int main() {
    int pro = 1, n ;
    cout << "Enter the number of terms (n): " ;
    cin >> n ;
    
    for (int i = 1; i <= n ; i++) {
        pro = pro * i;
        
    }
    cout << "Product of "<< n << " natural number = "<< pro ;
    
    return 0;
}
