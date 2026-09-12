// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPCP2
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, n;
    cin >> t;
    while(t--) {
        cin >> x >> n; // Fixed: read x and n, not t and n
        int requiredplanes = (n + 99) / 100;
        int newplanes = requiredplanes - x;
        if(newplanes < 0) {
            cout << 0 << endl;
        }
        else {
            cout << newplanes << endl;
        }
    }
    return 0;
}
