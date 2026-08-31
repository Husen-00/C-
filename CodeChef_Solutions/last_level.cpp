// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/LASTLEVELS
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, x,y,z;
    cin>>t;
    while(t--) {
        cin>>x>>y>>z;
        int breaks = (x-1)/3;
        cout<<(x*y) + (breaks*z)<<endl;
    }
    return 0;
}
