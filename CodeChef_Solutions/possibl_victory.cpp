// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/T20MCH
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r, o, c;
    cin >> r >> o >> c;

    int remaining_over = 20 - o;
    int max_possible_score = c + (remaining_over * 36);

    if (max_possible_score > r) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
