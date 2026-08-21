//  https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FINDSHOES
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int extra_shoes = n + max(0, n - m);
    
    cout << extra_shoes << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}
