// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRUESCORE
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,a,b,c,d;
    cin>>t;;
    while(t--) {
        cin>>a>>b>>c>>d;
        if(a<=c && b<=d) {
            cout<<"POSSIBLE"<<endl;
        }
        else {
            cout<<"IMPOSSIBLE"<<endl;
        }
    }
}
