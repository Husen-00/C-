// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/HELIUM3
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, a, b, x, y;
    cin>> t;
    while(t--) {
        cin>>a >> b>> x>> y;
        if(a*b <= x*y) {
            cout<< "YES\n";
        }
        else {
            cout<< "NO\n";
        }
    }
    return 0;
}
