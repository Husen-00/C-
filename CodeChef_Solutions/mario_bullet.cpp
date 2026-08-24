// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BULLET
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,x,y,z;
    cin>>t;
    while(t--) {
        cin>>x>>y>>z;
        int h=z-y/x;
        if(h<0) {
            cout<<0<<endl;
        }
        else {
            cout<<h<<endl;
        }
    }
    return 0;
}
