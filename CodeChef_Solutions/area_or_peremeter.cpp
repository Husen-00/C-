// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/AREAPERI
#include <iostream>
using namespace std;

int main() {
    int L, B;
    cin >> L >> B;

    int area = L * B;
    int peri = 2 * (L + B);

    if (area > peri) {
        cout << "Area" << endl;
        cout << area << endl;
    }
    else if (peri > area) {
        cout << "Peri" << endl;
        cout << peri << endl;
    }
    else {
        cout << "Eq" << endl;
        cout << area << endl;
    }

    return 0;
}
