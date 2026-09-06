// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WTRMIXING
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,a,b,x,y;
    cin>>t;
    while(t--) {
        cin>>a>>b>>x>>y;
        if(b>=a-y && b<=a+x) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
    return 0;
}
