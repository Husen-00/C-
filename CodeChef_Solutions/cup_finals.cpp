// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CRICUP
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, x,y,d;
    cin>>t;
    while(t--) {
        cin>>x>>y>>d;
        if(abs(x-y)<=d) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
    return 0;
}
