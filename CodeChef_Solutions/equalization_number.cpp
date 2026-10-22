// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/EQLZING
#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        long long A, B;
        cin >> A >> B;
        if ((A + B) % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
