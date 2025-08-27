//Check wether character is vowel or consonants
#include <iostream>
using namespace std;

int main() {
    char ch ;
    cout << "Enter an alphabet: " ;
    cin >> ch ;
    ch = tolower(ch) ;

    if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u') {
        cout << ch << " is a vowel " ;
    }
    else {
        cout << ch << " is a consonant " ;
    }
    return 0;
}
    
