// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPEEDTEST
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, a, x, b, y;
    cin>>t;
    while(t--) {
        cin>>a>>x>>b>>y;
        if(a*y > b*x) {
            cout<<"Alice"<<endl;
        }
        else if(b*x > a*y) {
            cout<<"Bob"<<endl;
        }
        else {
            cout<<"Equal"<< endl;
        }
    }
    return 0;
}
