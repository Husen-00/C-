// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/INCREAR
#include <iostream>
using namespace std;

void solve() {
    int X, Y;
    cin >> X >> Y;

    if (X == Y) {
        cout << 0 << endl;
    }
    else if (X > Y) {
        int diff = X - Y;
        cout << (2 * diff + 2) / 3 << endl;
    }
    else {
        cout << Y - X << endl;
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
