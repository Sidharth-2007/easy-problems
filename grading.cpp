//Find Grade from Mark
#include <iostream>
using namespace std;

int main() {
    double mark;
    cout << "Enter the CGPA: " ;
    cin >> mark ;
    if (mark == 10) {
        cout << "O" ;
    }
    else if (mark < 10 and mark >= 9.5 ) {
        cout << "A+";
    }
    else if (mark < 9.5 and mark >= 9){
        cout << "A";
    }
    else if (mark < 9 and mark >= 8) {
        cout << "B+";
    }
    else if (mark < 8 and mark >= 7) {
        cout << "B";
    }
    else if (mark < 7 and mark >= 6) {
        cout << "C+";
    }
    else if (mark < 6 and mark > 5) {
        cout << "C";
    }
    else if (mark == 5) {
        cout << "P";
    }
    else if (mark < 5 and mark >=0) {
        cout << "F";
    }
    else {
    cout << "Invalid CGPA";
    }

    return 0;
}
