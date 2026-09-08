// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFAPPS
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, s, x, y, z;
    cin>>t;
    while(t--) {
        cin>>s>>x>>y>>z;
        if(s-x-y >= z) {
            cout<<0<<endl;
        }
        else if(s-x>=z || s-y>=z) {
            cout<<1<<endl;
        }
        else {
            cout<<2<<endl;
        }
    }
    return 0;
}
