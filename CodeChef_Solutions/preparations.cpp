// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/SUPCHEF
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long M, N, K;
        cin >> M >> N >> K;

        if (N * K < M)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
