// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/LOOP
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long A, B, M;
        cin >> A >> B >> M;

        long long d = abs(A - B);

        cout << min(d, M - d) << endl;
    }

    return 0;
}
