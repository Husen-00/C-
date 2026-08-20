// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BATH
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,x,y;
    cin>>t;
    while(t--) {
        cin>>x>>y;
        if(2*y > x) {
            cout<<0<<endl;
        }
        else {
            cout<<x/(2*y)<<endl;
        }
    }
    return 0;
}
