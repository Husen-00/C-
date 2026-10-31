//https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/BESTOFTENNIS
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        cout << 2 * max(X, Y) - 1 << "\n";
    }

    return 0;
}
