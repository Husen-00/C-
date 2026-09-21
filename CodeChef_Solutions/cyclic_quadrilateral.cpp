// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CYCLICQD
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, a, b, c, d;
    cin>>t;
    while(t--) {
        cin>>a>>b>>c>>d;
        if(a+c==180 && b+d==180) {
            cout<<"YES\n";
        }
        else {
            cout<<"No\n";
        }
    }
    return 0;
}
