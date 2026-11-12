// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/VOWELTB
#include <iostream>
using namespace std;
int main() {
    char C;
    cin >> C;

    if (C == 'A' || C == 'E' || C == 'I' || C == 'O' || C == 'U') {
        cout << "Vowel";
    }
    else {
        cout << "Consonant";
    }

    return 0;
}
