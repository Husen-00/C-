// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MONOPOLY2
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,p,q,r,s;
    cin>>t;
    while(t--) {
        cin>>p>>q>>r>>s;
        if(p>q+r+s || q>p+r+s || r>p+q+s || s>p+q+r) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO" <<endl;
        }
    }
    return 0;
}
