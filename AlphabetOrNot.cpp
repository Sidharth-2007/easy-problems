//Check if a character is an alphabet or not.
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') or (ch >= 'a' && ch <= 'z')) {
        cout << ch << " is an alphabet";
        }
    else {
        cout << ch << " is not an alphabet";
        }

    return 0;
}
