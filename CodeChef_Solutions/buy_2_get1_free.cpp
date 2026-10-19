// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/SALE2
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, X;
        cin >> N >> X;

        // For every 3 items, Chef pays for 2
        int groups = N / 3;          // Number of full groups of 3
        int remaining = N % 3;       // Items left after grouping

        int cost = groups * 2 * X + remaining * X;
        cout << cost << "\n";
    }
    return 0;
}
